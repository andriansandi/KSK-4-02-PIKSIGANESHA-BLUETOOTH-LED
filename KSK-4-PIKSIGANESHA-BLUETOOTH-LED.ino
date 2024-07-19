#include "Arduino.h"
#include <SoftwareSerial.h>

// Define the RX and TX pins for the software serial communication
const byte rxPin = 9;
const byte txPin = 8;

// Create a software serial object
SoftwareSerial BTSerial(rxPin, txPin);

// Define the pin for the buzzer
const int buzzerPin = 14; // Pin 7 for the buzzer

void setup() {
  // Initialize the pins for software serial communication
  pinMode(rxPin, INPUT);
  pinMode(txPin, OUTPUT);

  // Initialize the software serial communication
  BTSerial.begin(9600);

  // Initialize the hardware serial communication for debugging
  Serial.begin(9600);

  // Initialize the buzzer pin as an output
  pinMode(buzzerPin, OUTPUT);
  // digitalWrite(buzzerPin, HIGH);
}

void loop() {
  // Check if data is available on the software serial
  while (BTSerial.available() > 0) {
    char data = (char) BTSerial.read(); // Read the incoming data
    Serial.print(data); // Print the received data to the serial monitor
    Serial.print("\n");

    // Check if the received character is '1'
    if (data == '1') {
      digitalWrite(buzzerPin, HIGH); // Turn on the buzzer
      Serial.println("Buzzer ON"); // Print a message to the serial monitor
    }
    // Check if the received character is '2'
    else if (data == '2') {
      digitalWrite(buzzerPin, LOW); // Turn off the buzzer
      Serial.println("Buzzer OFF"); // Print a message to the serial monitor
    }
  }
}
