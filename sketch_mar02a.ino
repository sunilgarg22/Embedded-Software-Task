#include <SoftwareSerial.h>

// Define software serial pins
#define RX_PIN 2
#define TX_PIN 3

// Create software serial object
SoftwareSerial mySerial(RX_PIN, TX_PIN);

void setup() {
  // Initialize serial communication
  Serial.begin(9600);
  mySerial.begin(9600);
}

void loop() {
  // Read characters from PC and transmit them back
  while (mySerial.available()) {
    char receivedChar = mySerial.read();  // Read character
    Serial.write(receivedChar);           // Send character back to PC
  }
}
