# Esp32_Wifi_Security_Testing
ESP32 WiFi Network Scanner (Security Testing)
Overview-
This project demonstrates WiFi network scanning and signal analysis using the ESP32 microcontroller.
It detects nearby WiFi networks and displays information such as network name (SSID), signal strength (RSSI), and channel.

The purpose of this project is to understand wireless networking concepts and embedded system communication in a controlled environment.

Hardware Used
ESP32 Development Board
USB Cable
Laptop with Arduino IDE
Software Used
Arduino IDE
ESP32 Board Library
Serial Monitor
Working Principle
The ESP32 has an integrated WiFi radio module capable of scanning nearby wireless networks.

The microcontroller periodically performs a scan and retrieves information about available networks including:

SSID (Network Name)
RSSI (Signal Strength)
Channel Number
These parameters help engineers analyze wireless network conditions.

Signal strength interpretation:

-30 dBm → Excellent signal
-50 dBm → Good signal
-70 dBm → Weak signal

Project Structure
esp32-wifi-security-testing
│
├── code
│   └── wifi_scan_demo.ino
├── docs
│   └── working_principle.md
├── images
│   └── esp32_serial_output.png
└── README.md
How to Run
Install Arduino IDE
Install ESP32 board package
Upload the code to ESP32
Open Serial Monitor
Observe nearby WiFi networks
Applications
Wireless network analysis
IoT network monitoring
Embedded systems learning
Cybersecurity education
Disclaimer
This project is developed strictly for educational and research purposes.
It should only be used in controlled environments to understand wireless network behavior.
