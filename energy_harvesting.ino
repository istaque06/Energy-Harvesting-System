// Energy Harvesting from Human Locomotion
// Basic Arduino Code
// Reads voltage from energy harvesting circuit

const int sensorPin = A0;   // Energy output connected to A0
float voltage = 0.0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(sensorPin);

  // Convert ADC value to voltage (Arduino Uno: 5V reference)
  voltage = sensorValue * (5.0 / 1023.0);

  Serial.print("Generated Voltage: ");
  Serial.print(voltage);
  Serial.println(" V");

  delay(500);
}