Smart Dustbin using Ultrasonic Sensor and Servo Motor
This project implements an automatic smart dustbin using an ultrasonic sensor, a servo motor, and a buzzer. The system detects nearby objects, automatically opens the lid when an object is detected, and emits a beep sound. It helps promote hygiene by offering a touchless waste disposal solution.

✅ Features:
Automatic Lid Opening: The servo motor opens the lid when an object is detected within 10 cm.

Buzzer Alert: Provides an audio alert when an object is detected.

Distance Monitoring: Displays real-time distance readings via the serial monitor.

⚙️ Components Required:
Ultrasonic Sensor (HC-SR04)

Servo Motor (SG90 or similar)

Buzzer

Arduino Board (e.g., Arduino Uno)

Jumper Wires

🔌 Circuit Connection:
Trig Pin: Digital Pin 2

Echo Pin: Digital Pin 3

Buzzer: Digital Pin 4

Servo Motor: Digital Pin 9

🚀 How It Works:
The ultrasonic sensor continuously measures the distance to detect nearby objects.

If an object is within 10 cm, the servo motor opens the lid and the buzzer beeps.

After 3 seconds, the lid closes automatically.

If the distance is greater than 50 cm, the buzzer remains off.

📦 How to Run:
Connect the components as per the circuit diagram.

Upload the provided Arduino code to your Arduino board.

Open the serial monitor to observe real-time distance readings.

