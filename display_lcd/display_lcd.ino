#include <LiquidCrystal.h>
LiquidCrystal lcd(6, 7, 8, 9, 10, 11);
void setup() {
  lcd.begin(16, 2);
}
void loop() {
  lcd.clear();
  lcd.setCursor(2, 0);
  lcd.print("Hello World!");
  lcd.setCursor(3, 1);
  lcd.print("Projetuino");
  delay(1000);
}
