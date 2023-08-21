#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);
void setup() {
  lcd.init();
  lcd.backlight();
}

void loop() {
  lcd.setCursor(0,0);
  lcd.print("Ismael's LCD");
  delay(1000);
  lcd.clear();
  lcd.print("Using an...");
  delay(1000);
  lcd.clear();
  lcd.print("arduino Uno");
  delay(1000);
  lcd.clear();
  
  
  for(int i=1;i<=100;i++){
    lcd.print("watch me countE");
    lcd.setCursor(0,1);
    lcd.print(i);
    delay(500);
    lcd.clear();
  }
}
