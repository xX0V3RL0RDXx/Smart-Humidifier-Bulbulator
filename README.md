# Bulbulator – Smart Voice-Assisted Humidifier 💧🗣️

The **Bulbulator** is a DIY smart air humidifier that automatically maintains a desired humidity level in your room. It uses a DHT11 sensor, two-button control, a 16x2 LCD display.

---

## 🔧 How It Works

1. Press **Button 1** to set the target humidity level (shown on the LCD).
2. Press **Button 2** to confirm the selected level.
3. The system continuously reads the current humidity from a **DHT11** sensor.
4. If humidity drops below the set value, the humidifier is activated.
5. Once the target level is reached, the device stops automatically.
6. The **LCD** displays current and target humidity.

---

## ✨ Features

- 🖲️ Two-button interface for input and confirmation
- 📟 16x2 LCD display for real-time data
- 📉 Auto control based on live humidity readings
- 🔁 Continuous monitoring and display refresh
- ⚡ Power efficient and easy to build
---

## 🧰 Components
 - Arduino Uno             | Microcontroller                         
 - DHT11                   | Humidity and temperature sensor         
 - 16x2 LCD (I2C or direct)| Humidity display                        
 - Relay / MOSFET          | Controls humidifier power
 - Humidifier              | Ultrasonic or fan-based module
 - 2x Push Buttons         | For setting and confirming humidity
 - LEDs (optional)         | Status indicators 
 - Power source            | USB or 5V–12V               
 - Resistors, wires        | Basic electronics components
---

## 🔌 Wiring Overview

 TO DO
---

## 🚀 Getting Started

1. Assemble components and wire everything to your microcontroller
2. Upload the Arduino sketch using the Arduino IDE
3. Power the system via USB or external supply
4. Use Button 1 to select your desired humidity (e.g. 55%)
5. Confirm with Button 2
6. Monitor current and target humidity on the LCD
7. Let the Bulbulator take care of the air! 🌫️

---

## 📄 License

This project is open-source. Feel free to remix, improve, and share it with credit to the original author.

---

## 📷 Demo / Media

TO DO
---

### Made with 💙 by [Oliwier Gramala]
