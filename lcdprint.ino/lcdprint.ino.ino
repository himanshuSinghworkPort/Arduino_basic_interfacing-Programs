#include <Wire.h>

#include <LiquidCrystal_I2C.h>

#include <Wire.h>


LiquidCrystal_I2C lcd(0*27,16,2);


void setup() {
lcd.init();
lcd.backlight();  // put your setup code here, to run once:

}

void loop() {
  lcd.setCursor(0,0);
  lcd.print("Himanshu");
  delay(2000);
  lcd.clear();
  
  // put your main code here, to run repeatedly:

}
