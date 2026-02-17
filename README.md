# Energy-Harvesting-System
Energy harvesting system generating electrical energy from human locomotion using mechanical and electrical conversion.
## Features
- Generates electrical energy from human motion
- Mechanical to electrical energy conversion
- Low-cost and portable system
- Suitable for wearable or smart floor applications

## Components Used
- DC Generator / Dynamo
- Rectifier Circuit
- Voltage Regulator
- Rechargeable Battery
- Connecting Wires
- Mechanical motion setup

## Applications
- Wearable energy harvesting
- Smart shoes & smart floors
- Emergency mobile charging
- Portable power generation

## Arduino Code

```cpp
// Energy Harvesting Monitoring Code

const int sensorPin = A0;
float voltage = 0.0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(sensorPin);
  voltage = sensorValue * (5.0 / 1023.0);

  Serial.print("Generated Voltage: ");
  Serial.print(voltage);
  Serial.println(" V");

  delay(500);
}
## Author
Md Istaque Ansari  
Electronics & Communication Engineering Student  
Focused on Embedded Systems and real-world hardware projects.
## Project Demo
![Demo](IMG-20260202-WA0012~2.jpg)
![Demo](IMG-20260202-WA0014~2.jpg)
![Demo](IMG-20260202-WA0016~2.jpg)
