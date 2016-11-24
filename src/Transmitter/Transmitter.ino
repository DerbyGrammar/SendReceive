/*
 * Derby Grammar
 * Transmittor - SendRecieve
 */
#include <VirtualWire.h>

const int armSwitch = 2;
const int inputPin = 3;
const int transmitPin = 4;

void setup() {
  pinMode(armSwitch, INPUT);
  pinMode(inputPin, INPUT);
  pinMode(transmitPin, OUTPUT);
}

void loop() {
  bool armState = digitalRead(armSwitch);
  bool inputState = digitalRead(inputPin);
  if(armSwitch == HIGH) {
    if(inputState == HIGH) {
      transmit(true);    
    } else {
      transmit(false);
    }
  }
  delay(500);
}

void transmit(bool state) {
  
}

