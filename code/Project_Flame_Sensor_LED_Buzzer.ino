// C++ code
//
int FlameSensor = 0;

void setup()
{
  pinMode(A0, INPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
}

void loop()
{
  FlameSensor = analogRead(A0);
  if (FlameSensor < 100) {
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
  } else {
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
  }
  delay(10); // Delay a little bit to improve simulation performance
}