#  Smart Soil Monitoring System (Embedded IoT Prototype)

A real-time embedded system built using Arduino Nano, soil moisture sensor, and a 4x4 matrix keypad.

This project simulates a smart agricultural monitoring system that helps users check soil conditions and get instant feedback through LEDs and serial communication.

---

#  Features

- Real-time soil moisture monitoring
- Keypad-controlled system interface
- Live LED status indicators (RED/GREEN)
- System status dashboard via serial monitor
- Embedded state-based system design
- Beginner-friendly IoT foundation project

---

#  System Overview

```text
Keypad Input
     ↓
Arduino Nano
     ↓
Soil Moisture Sensor
     ↓
Decision Logic
     ↓
LED + Serial Output
```

---

#  Hardware Components

| Component | Description |
|----------|-------------|
| Arduino Nano | Microcontroller |
| Soil Moisture Sensor | Detects soil condition |
| 4x4 Keypad | User input interface |
| Red LED | Dry soil indicator |
| Green LED | Wet soil indicator |

---

#  System Functions

##  Key 1 — Live Monitoring Mode
- Reads soil sensor
- Shows DRY or WET status
- Blinks corresponding LED

##  Key 2 — System Status
- Displays system information
- Shows current soil reading
- Shows live soil condition

---

#  Wiring Diagram

## Soil Sensor

| Pin | Arduino |
|-----|--------|
| VCC | 5V |
| GND | GND |
| DO  | D10 |

## Keypad

| Keypad | Arduino |
|--------|--------|
| R1-R4 | D9, D8, D7, D6 |
| C1-C4 | D5, D4, D3, D2 |

## LEDs

| LED | Arduino |
|-----|--------|
| Red LED | D12 |
| Green LED | D11 |

---

# Arduino Code

You can check the code inside the SMART_SOIL MONITOR_SYSTEM folder
---

#  Real-World Problem Solved

Farmers often rely on guesswork to determine soil moisture levels, leading to:

- Overwatering crops
- Underwatering plants
- Water waste
- Poor crop yield

---

#  Solution

This system provides:

- Instant soil condition detection
- Visual LED feedback
- Manual control via keypad
- Reliable embedded decision system

---

# 🚀 Future Improvements

- ESP8266 Wi-Fi dashboard integration
- Mobile app monitoring
- Automatic irrigation system (relay + pump)
- Cloud data storage (Firebase / MQTT)
- OLED display upgrade

---

# 👨‍💻 Author

**MANSUR ISAH**


---
