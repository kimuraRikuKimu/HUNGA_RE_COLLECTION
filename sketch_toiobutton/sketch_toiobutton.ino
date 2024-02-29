#include "Keyboard.h"

const int buttonPin = 4;
int previousButtonState = HIGH;

void setup() {
  pinMode(buttonPin, INPUT);
  Keyboard.begin();
}

void loop() {
  int buttonState = digitalRead(buttonPin);
  if (buttonState != previousButtonState && buttonState == HIGH) {
    Keyboard.write('1');
  }
  previousButtonState = buttonState;
}