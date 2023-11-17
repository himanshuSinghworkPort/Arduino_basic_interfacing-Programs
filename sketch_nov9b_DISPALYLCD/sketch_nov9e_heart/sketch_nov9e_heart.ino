#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0*27,16,2);
byte Heart[8]={
    0b00000,
    0b01010,
    0b11111,
    0b11111,
    0b01110,
    0b00100,
    0b00000,
    0b00000
  };
void setup() {
  lcd.init();
  lcd.clear();
  lcd.backlight();
  lcd.createChar(1,Heart);
  lcd.clear(); 
  
  // put your setup code here, to run once:

}

void loop() {
    lcd.setCursor(0,1);
    lcd.write(byte(1));
    delay(2000);
  // put your main code here, to run repeatedly:

}
