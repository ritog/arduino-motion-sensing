# Motion Sensing using Arduino Uno

A very simple microcontroller project that detects motion and uses an LED to indicate the motion. Also logs the output to Serial Monitor inside the Arduino IDE.

What it does: when you move anything near the sensor, an LED light blinks and a timestamp of the movement is logged whenever it is detected with helpful message.



https://github.com/ritog/arduino-motion-sensing/assets/58001482/2de68907-cc59-4248-9f4b-bc291a2f42a2

![IMG_20231001_230437_786](https://github.com/ritog/arduino-motion-sensing/assets/58001482/cb3317be-13ea-46b8-a386-a3926da83e96)


This is an educational project from where beginners in microcontrollers can learn and experiment from.

___
<img style="margin: 10px" src="https://upload.wikimedia.org/wikipedia/commons/8/87/Arduino_Logo.svg" alt="Arduino" height="50" /><img style="margin: 10px" src="https://upload.wikimedia.org/wikipedia/commons/1/18/C_Programming_Language.svg" alt="C" height="50" /><img style="margin: 10px" src="https://upload.wikimedia.org/wikipedia/commons/a/ab/Linux_Logo_in_Linux_Libertine_Font.svg" alt="Linux" height="50" />

### 🛠️ Hardware Needed

1. Arduino Uno
2. HC-SR501 PIR sensor
3. Breadboard
4. Jumper wires (both male-male and male-female)
5. USB to Arduino Uno connector cable
6. A laptop/desktop

### 🖥️ Software Required

1. An OS where Arduino IDE is supported (I used Linux)
2. Arduino IDE
3. You have administrative privileges in your OS

___

### 📍 Pins Connections

There are three pins in HC-SR501 PIR Sensor - GND, VCC, and OUT.
Here's how they are connected to the pins in the Arduino board-

| HC-SR501 PIR Sensor | Arduino Uno |
| ------------------- | ----------- |
| GND                 | GND         |
| VCC                 | 5V          |
| OUT                 | 8           |

And the LED is connected to pin 12 of the Arduino board.

A common ground is used for both the sensor and the LED, and is connected via the breadboard.

### 🏃‍♀️ How to Run This (for Dummies)

0. Make the connections as mentioned above
1. Launch Arduino IDE
2. Select the proper board and port from the Tools menu
3. Copy the code from `motion-sensing.ino` and paste it in the IDE
4. Click on the Verify button to check if there are any errors
5. Click on the Upload button to upload the code to the Arduino board

⚠️ Make sure that you have the permissions to access the appropriate port. Every time you disconnect the wire connecting the Arduino board, you need to make the port accessible again.

For me it was `/dev/ttyACM0`. You have to fix it according to the error you see inside the Arduino IDE.

```bash
sudo chmod a+rw /dev/ttyACM0
```

### Picture Gallery

![IMG_20231001_232406_523](https://github.com/ritog/arduino-motion-sensing/assets/58001482/c39407af-f4b6-4b12-9994-524e2e456a5c)
![IMG_20231001_232336_038](https://github.com/ritog/arduino-motion-sensing/assets/58001482/ff1287c6-0f63-4ad7-bbfb-45d8c9d104fc)
![IMG_20231001_232231_977](https://github.com/ritog/arduino-motion-sensing/assets/58001482/bda6a8b2-5f02-4cd0-9ec8-3e5f07ab35ac)
![IMG_20231001_232110_391](https://github.com/ritog/arduino-motion-sensing/assets/58001482/d5ef0de8-cc43-40dc-9161-a990f4959ef8)


### Acknowledgement
Thanks to my cuz Soumyadipta Ghosh for bringing the hardware to my house- for me to test. 😒😸

### 📝 Resources
1. [How HC-SR501 PIR Sensor Works & Interface It With Arduino](https://lastminuteengineers.com/pir-sensor-arduino-tutorial/)
2. [Arduino LED – Complete Tutorial](https://roboticsbackend.com/arduino-led-complete-tutorial/)
3. [millis()](https://www.arduino.cc/reference/en/language/functions/time/millis/)
