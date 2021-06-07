#include <Arduino.h>

int ledxanh =9;
int leddo =8;
void setup() {
 pinMode(ledxanh, OUTPUT);
 pinMode(leddo, OUTPUT);
}

void loop() {
  digitalWrite(ledxanh, HIGH);
  digitalWrite(leddo, LOW);
  delay(100);
  digitalWrite(ledxanh, LOW);
  digitalWrite(leddo,HIGH);
  delay(100);
  // put your main code here, to run repeatedly:
}

