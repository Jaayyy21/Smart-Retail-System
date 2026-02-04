#include <SoftwareSerial.h>

#define BT_RX 3
#define BT_TX 2
#define IR_PIN 4

SoftwareSerial btSerial(BT_RX, BT_TX);

void setup() {
  Serial.begin(9600);
  
  btSerial.begin(9600);
  
  pinMode(IR_PIN, INPUT);
}

void loop() {
  if (btSerial.available()) {
    char c = btSerial.read();
    Serial.print("Data received from Bluetooth module: ");
    Serial.println(c);
  }

  // Read the value from the IR sensor
  int irValue = digitalRead(IR_PIN);
  Serial.print("IR sensor value: ");
  Serial.println(irValue);

  // Add a delay
  delay(1000);
}
