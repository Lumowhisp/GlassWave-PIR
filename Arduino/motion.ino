#include <Arduino.h>
int pirPin = 2;     // PIR sensor OUT
int ledPin = 3;     // LED on PWM pin
int pirState = LOW; // previous stable state
int val = 0;        // current PIR read
int motionCount = 0; // count how many times motion occurred

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(pirPin, INPUT);
  Serial.begin(9600);
}

void fadeIn() {
  for (int b = 0; b <= 255; b += 5) {
    analogWrite(ledPin, b);
    delay(5);
  }
}

void fadeOut() {
  for (int b = 255; b >= 0; b -= 5) {
    analogWrite(ledPin, b);
    delay(5);
  }
}

void loop() {
  val = digitalRead(pirPin);

  if (val == HIGH && pirState == LOW) {
    // 👉 Motion just started
    motionCount++;  // count +1

    fadeIn();

    // Send structured JSON-like message to PC
    Serial.print("{\"motion\":1,\"count\":");
    Serial.print(motionCount);
    Serial.println("}");

    pirState = HIGH;
  }

  else if (val == LOW && pirState == HIGH) {

    fadeOut();

    Serial.println("{\"motion\":0}"); // motion ended

    pirState = LOW;
  }
}