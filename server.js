const express = require("express");
const cors = require("cors");
const { SerialPort } = require("serialport");
const { ReadlineParser } = require("@serialport/parser-readline");

const app = express();
app.use(cors());

// 👉 Change your Arduino COM port here (example: "COM9", "COM5", "/dev/ttyACM0")
const port = new SerialPort({
  path: "COM9",
  baudRate: 9600,
});

// Serial parser
const parser = port.pipe(new ReadlineParser({ delimiter: "\n" }));

// Data to send to website
let motion = 0;
let count = 0;

// Read incoming serial data from Arduino
parser.on("data", (line) => {
  console.log("Serial → ", line);

  try {
    const data = JSON.parse(line);

    if (data.motion === 1) {
      motion = 1;
      count = data.count; // update motion count
    } else if (data.motion === 0) {
      motion = 0;
    }

  } catch (err) {
    console.log("JSON parse error:", err.message);
  }
});

// API endpoint to send JSON to index.html
app.get("/api/status", (req, res) => {
  res.json({
    motion: motion,
    count: count,
  });
});

// Start server
app.listen(3000, () => {
  console.log("🚀 Server running at http://localhost:3000");
});