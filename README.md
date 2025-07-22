# Bulbulator – Smart Humidifier Controller 💧

This project is a simple DIY smart humidifier controller that keeps your room humidity at a desired level. It uses a DHT11 sensor to monitor humidity, a 16x2 LCD to display current and target values, and two buttons for setting the target humidity. The humidifier is switched on and off automatically via a relay or MOSFET.

---

## ❔ How It Works

- Press **Button UP** to increase the target humidity value (displayed on LCD).
- Press **Button SET** to confirm the target humidity.
- The DHT11 sensor continuously reads the room humidity.
- If the current humidity falls below the target, the humidifier is turned on.
- Once the target humidity is reached, the humidifier turns off automatically.
- The LCD shows the live humidity and the set target.

---

## ⭐Features

- Simple two-button interface to set humidity target
- Real-time display of current and target humidity on 16x2 LCD
- Automatic humidifier control via relay or MOSFET
- Easy to build and customize
- Low power consumption — humidifier runs only when needed

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
## 🖥️ Usage
1. Connect all components according to wiring.
2. Upload the Arduino sketch using Arduino IDE.
3. Power the system.
4. Use **Button UP** to set your desired humidity target.
5. Press **Button SET** to confirm.
6. The Bulbulator will monitor the humidity and control the humidifier accordingly.
7. Check current and target humidity on the LCD

---

## 📄 License

This project is open-source. Feel free to remix, improve, and share it with credit to the original author.

---

## 📷 Demo / Media

TO DO
---

### Made with 💙 by [Oliwier Gramala]
