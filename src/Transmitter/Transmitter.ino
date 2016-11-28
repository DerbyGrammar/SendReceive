/*
 * Derby Grammar
 * Transmittor - SendRecieve
 */
#include <VirtualWire.h>

const int armSwitch = 2;
const int inputPin = 3;
const int transmitPin = 4;

unsigned long lastTime;
unsigned long curtTime;
const int timeBetweenCheck = 500;

void setup() {
  pinMode(armSwitch, INPUT);
  pinMode(inputPin, INPUT);
  pinMode(transmitPin, OUTPUT);
}

void loop() {
  if(curtTime - lastTime => timeBetweenCheck) {
    bool armState = digitalRead(armSwitch);
    bool inputState = digitalRead(inputPin);
    if(armSwitch == HIGH) {
      if(inputState == HIGH) {
        transmit(true);    
      } else {
        transmit(false);
      }
    }
  lastTime = millis();
  }
}

void transmit(bool state) {

}

