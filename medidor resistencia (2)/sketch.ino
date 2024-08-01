

#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 10, 9, 8, 7);

//rd es la resistencia conocida

int rc = 1000.0;

void setup() {
  lcd.begin(16, 2);
}

void loop() {
  float SensorValue = analogRead(A0);
  //rd es la resistencia desconocida
  float rd = rc*(5.0/(SensorValue*(5.0/1023.0)));
  
  lcd.setCursor(0,0);
  lcd.print(rd);
}
