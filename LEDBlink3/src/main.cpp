#include <Arduino.h>

int ledxanh = 9;
int leddo = 8;
int ledvang = 10;
void setup()
{
  pinMode(ledxanh, OUTPUT);
  pinMode(leddo, OUTPUT);
  pinMode(ledvang, OUTPUT);
  digitalWrite(ledxanh, HIGH);
  digitalWrite(leddo, HIGH);
  digitalWrite(ledvang, HIGH);
}

void loop()
{
  digitalWrite(leddo, LOW);
  delay(1000);
  digitalWrite(ledxanh, LOW);
  delay(1000);
  digitalWrite(ledvang, LOW);
  delay(1000);
  
  // put your main code here, to run repeatedly:
}
