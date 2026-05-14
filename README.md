# 🎭 Emotion Detection OLED System

<div align="center">

## Real-Time AI Emotion Detection with OLED Emoji Display

Detect human emotions using a webcam and display matching emojis on an OLED screen using Arduino.

</div>

---

# 📌 Project Overview

This project is a combination of:

- Artificial Intelligence
- Computer Vision
- Arduino Programming
- OLED Display Interfacing

The system captures the user's face through a webcam, detects emotions using a trained AI model, and sends the detected emotion to an Arduino. The Arduino then displays a matching emoji on the OLED screen.

---

# 🚀 Features

✅ Real-time emotion detection  
✅ OLED emoji display  
✅ Arduino + Python communication  
✅ Webcam-based face recognition  
✅ Multiple emotion support  
✅ Beginner-friendly project structure  
✅ Easy setup and execution  

---

# 🧠 Supported Emotions

| Emotion | OLED Emoji |
|---|---|
| Happy | 😊 |
| Sad | 😢 |
| Angry | 😠 |
| Surprise | 😲 |
| Neutral | 😐 |

---

# 🛠️ Technologies Used

## Software
- Python
- OpenCV
- TensorFlow / Keras
- PySerial
- Arduino IDE

## Hardware
- Arduino UNO/Nano
- SSD1306 OLED Display
- USB Cable
- Laptop Webcam

---

# 📂 Project Structure

```text
emotion-detection-oled/
│
├── Ardunio_Code/
│   └── Ardunio_Code.ino
│
├── Data_Set/
│   ├── train/
│   └── test/
│
├── Images/
│   ├── hardware_setup.jpg
│   ├── output.jpg
│   └── circuit_connections.jpg
│
├── Models/
│   └── emotion_model.h5
│
├── Python_Code/
│   ├── emotion_detector.py
│   └── train_model.py
│
├── requirements.txt
└── README.md
```

---

# 🔌 Hardware Connections

| OLED Pin | Arduino UNO |
|---|---|
| VCC | 5V |
| GND | GND |
| SDA | A4 |
| SCL | A5 |

---

# 💻 Software Installation

## Step 1 — Install Python

Download Python 3.10:

https://www.python.org/downloads/

⚠️ During installation:
- Check ✅ "Add Python to PATH"

---

## Step 2 — Install Arduino IDE

Download Arduino IDE:

https://www.arduino.cc/en/software

Install normally.

---

## Step 3 — Clone Repository

```bash
git clone https://github.com/Naveen-Sai-25/emotion-detection-oled.git
cd emotion-detection-oled
```

---

# 📦 Install Required Libraries

Run:

```bash
pip install -r requirements.txt
```

If any library fails:

```bash
pip install opencv-python tensorflow keras numpy pyserial fer
```

---

# ⚡ Arduino Setup

## Step 1
Open Arduino IDE.

## Step 2
Open:

```text
Ardunio_Code/Ardunio_Code.ino
```

## Step 3
Install Required Libraries:

### Install:
- Adafruit GFX
- Adafruit SSD1306

Install from:

```text
Arduino IDE → Sketch → Include Library → Manage Libraries
```

---

## Step 4
Select Board:
```text
Tools → Board → Arduino UNO
```

## Step 5
Select COM Port:
```text
Tools → Port → COMx
```

## Step 6
Upload code to Arduino.

---

# ▶️ Run the Project

Run this command:

```bash
python Python_Code/emotion_detector.py
```

---

# 📷 Output

## Emotion Detection Window
(Add your screenshot here)

```md
![Output](Images/output.jpg)
```

---

## Hardware Setup

```md
![Hardware](Images/hardware_setup.jpg)
```

---

## Circuit Connections

```md
![Connections](Images/circuit_connections.jpg)
```

---

# 🔄 Working Principle

1. Webcam captures live video.
2. Python detects face emotion.
3. AI model predicts emotion.
4. Emotion sent to Arduino through serial communication.
5. Arduino displays matching emoji on OLED.

---

# 🧪 Train Your Own Model

If you want to train your own model:

Run:

```bash
python Python_Code/train_model.py
```

Dataset folders:

```text
Data_Set/train
Data_Set/test
```

After training:
- New model will be saved as:
```text
emotion_model.h5
```

Move the model into:
```text
Models/
```

---

# 🛠️ Common Errors & Fixes

## 1. Webcam Not Opening

Close applications using camera:
- Zoom
- Teams
- Browser camera tabs

---

## 2. Serial Port Error

Check correct COM Port in Arduino IDE.

---

## 3. Model File Not Found

Ensure file exists:

```text
Models/emotion_model.h5
```

---

## 4. OLED Not Displaying

Check:
- SDA → A4
- SCL → A5
- OLED address

---

# 📈 Future Improvements

- Bluetooth connectivity
- Mobile app control
- Animated emojis
- Multi-face detection
- Voice assistant integration

---

# 🎯 Applications

- Smart AI Assistants
- Mental Health Monitoring
- Human Emotion Analysis
- AI Robotics
- Smart Embedded Systems
