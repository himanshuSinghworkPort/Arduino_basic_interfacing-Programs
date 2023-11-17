//GND-GND
//VCC-5V SUPPLY POWER
//SDA- A4
//SCL-A5
#include<Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2);  // set the LCD address to 0x3F for a 16 chars and 2 line display

void setup() {
  lcd.init();
  lcd.clear();         
  lcd.backlight();      // Make sure backlight is on
  
  // Print a message on both lines of the LCD.
 
}

void loop() {
  lcd.setCursor(4,0);   //Set cursor to character 2 on line 0
  lcd.print("WELCOME");
  delay(1000);
  lcd.clear();

  lcd.setCursor(6,0);   //Set cursor to character 2 on line 0
  lcd.print("TO");
  delay(1000);
  lcd.clear();

  lcd.setCursor(4,1);   //Move cursor to character 2 on line 1
  lcd.print("HIMANSHU");
  delay(1000);
  lcd.clear();
  lcd.setCursor(6,0);   //Move cursor to character 2 on line 1
  lcd.print("HOME");
  delay(1000);
  lcd.clear();
    lcd.setCursor(5,1);   //Move cursor to character 2 on line 1
  lcd.print("H ****");
  delay(1000);
  lcd.clear();

  lcd.setCursor(4,1);   //Move cursor to character 2 on line 1
  lcd.print("KALYANPUR");
  delay(1000);
  lcd.clear();

  lcd.setCursor(5,1);   //Move cursor to character 2 on line 1
  lcd.print("KANPUR");
  delay(1000);
  lcd.clear();
}
