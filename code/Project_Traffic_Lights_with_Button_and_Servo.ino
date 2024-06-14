// C++ code
//
#include <Servo.h>

int buttonState = 0;

Servo servo_10;

void setup()
{
  pinMode(2, INPUT);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  servo_10.attach(10, 500, 2500);
}

void loop()
{
  buttonState = digitalRead(2);
  if (buttonState == 0) {
    digitalWrite(13, HIGH);
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
    servo_10.write(90);
  } else {
    digitalWrite(13, LOW);
    digitalWrite(12, HIGH);
    digitalWrite(11, LOW);
    servo_10.write(0);
    delay(2000); // Wait for 2000 millisecond(s)
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    digitalWrite(11, HIGH);
    delay(5000); // Wait for 5000 millisecond(s)
  }
}