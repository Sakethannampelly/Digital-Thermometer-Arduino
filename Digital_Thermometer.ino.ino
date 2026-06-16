// C++ code
//
#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

int sensorPin = A0;

void setup()
{
  lcd.begin(16, 2);
}

void loop()
{
  int reading = analogRead(sensorPin);

  float voltage = reading * 5.0;
  voltage /= 1024.0;

  float temperatureC = (voltage - 0.5) * 100;

  lcd.clear();

  lcd.setCursor(0, 0);
  lcd.print("Temperature");

  lcd.setCursor(0, 1);
  lcd.print(temperatureC);
  lcd.print((char)223);
  lcd.print("C");

  delay(1000);
}