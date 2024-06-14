// C++ code
//
int soil_moisture_sensor = 0;

void setup()
{
  pinMode(A0, INPUT);
  pinMode(4, OUTPUT);
}

void loop()
{
  soil_moisture_sensor = analogRead(A0);
  if (soil_moisture_sensor > 400) {
    digitalWrite(4, HIGH);
  } else {
    digitalWrite(4, LOW);
  }
  delay(10); // Delay a little bit to improve simulation performance
}