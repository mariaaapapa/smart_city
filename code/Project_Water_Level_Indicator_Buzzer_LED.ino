// C++ code
//
int sensorValue = 0;

void setup()
{
  pinMode(A0, INPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
}

void loop()
{
  sensorValue = analogRead(A0);
  if (sensorValue <= 200) {
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
  } else {
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
  }
  delay(10); // Delay a little bit to improve simulation performance
}