#include <Arduino.h>
int led = 3;
void setup() {
 pinMode(led, OUTPUT);
}

void loop() {
  digitalWrite(led, HIGH);
  delay(1000);
  digitalWrite(led, LOW);
  delay(1000);
  // put your main code here, to run repeatedly:
}