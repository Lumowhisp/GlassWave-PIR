# 🚀 GlassMotion‑OS  
A futuristic **Smart Automation Dashboard** built for real‑time PIR sensor monitoring, activity tracking, and lighting automation — all wrapped in a premium **glassmorphism UI** with smooth GSAP animations.

---

## ✨ Features

### 🔵 Futuristic UI  
- Glassmorphism panels  
- Neon glows & soft shadows  
- Smooth GSAP transitions  
- Fully responsive layout  

### 👁️ Real‑Time Motion Dashboard  
- Live PIR sensor data  
- Motion status (Detected / Clear)  
- Auto‑updating last motion timestamp  
- Detection counter  
- System health indicator (Online / Offline)  

### 📊 Motion Activity Chart  
- Built with Chart.js  
- 1/0 signal visualization  
- Updates every second  
- Clean timeline graph  

### 🧠 Smart Automation Preview  
- PIR → Lighting automation rules  
- Example triggers (evening lights, idle dimming)  
- Extendable logic for future smart‑home devices  

### 🏠 Active Zones Panel  
- Entry corridor  
- Living room  
- Bedroom  
- Shows automation status for each zone  

### 📡 Raw JSON Live Feed  
- Direct API block  
- Updates every second  
- Helps debug Arduino / Node backend  

### 📜 Activity Log  
- Motion / clear events  
- Timestamped  
- Auto scroll  
- Great for monitoring patterns  

---

## 🛠️ Tech Stack

| Layer | Technology |
|-------|------------|
| UI | **HTML, TailwindCSS, Glassmorphism** |
| Animation | **GSAP** |
| Charts | **Chart.js** |
| Backend | **Node.js (Express API)** |
| Hardware (optional) | **Arduino / PIR Sensor** |

---

## 📂 Project Structure

```
Automation/
│
├── docs/                # Additional documentation
│   └── Readme.md
│
├── index.html           # Main UI (Dashboard)
├── server.js            # API backend (local)
├── .gitignore           # macOS + Node + build ignores
└── README.md            # You're reading this 🙂
```

---

## ▶️ How to Run

### 1️⃣ Install Node packages (if any future dependencies are added)
```
npm install
```

### 2️⃣ Start the backend server  
```
node server.js
```

### 3️⃣ Open the UI  
Just click **index.html** in your browser.

The dashboard will now connect to  
```
http://localhost:3000/api/status
```

and display real‑time data.

---

## 📡 API Format

Your backend should return JSON like:

```
{
  "motion": 1,
  "count": 5,
  "lastMotion": "19:23:10"
}
```

---

## 🌟 Screenshots  
_Add later once your dashboard looks fire 🔥_

---

## 🤝 Contributing  
PRs open for UI improvements, automation logic, animations, or new device integrations.

---

## 📜 License  
MIT License — free to use, modify & share.

---

## ✨ Author  
**Aditya**  
Smart Automation • UI/UX • IoT Hobbyist  

---


