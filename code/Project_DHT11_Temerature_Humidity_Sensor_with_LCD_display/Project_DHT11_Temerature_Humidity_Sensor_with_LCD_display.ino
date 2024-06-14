#include <dht.h>

dht DHT;

#define DHT11_PIN 7

#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

// Δημιουργία ενός νέου στιγμιότυπου (instance) της κλάσης (class) LiquidCrystal_I2C:
LiquidCrystal_I2C lcd(0x27, 16, 2);

// Δημιουργία συμβόλου βαθμού (Degree symbol):
byte Degree[] = {
  B00111,
  B00101,
  B00111,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000
};


void setup(){
  Serial.begin(9600);

  //Εκκίνηση της οθόνης LCD άνοιγμα του οπίσθιου φωτισμού (backlight):
  lcd.init();
  lcd.backlight();

  //Δημιουργία ειδικού χαρακτήρα:
  lcd.createChar(0, Degree);
}

void loop(){
  float chk = DHT.read11(DHT11_PIN);

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Temp= ");
  lcd.print(DHT.temperature);
  lcd.write(0); // εκτύπωση ειδικού χαρακτήρα:
  lcd.print("C");

  lcd.setCursor(0, 1);
  lcd.print("Humidity= ");
  lcd.print(DHT.humidity);
  lcd.print("%");

  Serial.print("Temperature = ");
  Serial.println(DHT.temperature);
  Serial.print("Humidity = ");
  Serial.println(DHT.humidity);
  delay(2000);
  lcd.clear();
}