#include <Arduino.h>

void setup()
{
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);

  for (int i = 3; i < 11; i++)
  {
    digitalWrite(i, HIGH);
  }
  // put your setup code here, to run once:
}

void loop()
{
  delay (1000);
  for (int i =3; i <11; i++)
  {
    digitalWrite (i, HIGH);
    delay (500);
  }
  for (int i=3; i<11;i++)
  {
    digitalWrite (i, LOW);
    delay (500);
  }
  for (int i =10; i >2; i--)
  {
    digitalWrite (i, HIGH);
    delay (500);
  }
  int a =0;
  while (a!=8)
  {
    for (int i = 3; i<11; i++)
    {
      if (i%2==1)
      {
        digitalWrite(i, LOW);
        delay (500);
      }
      else 
      {
        digitalWrite (i, HIGH);
        delay(500);
      }
      a ++;
    }
  }
  // put your main code here, to run repeatedly:
}