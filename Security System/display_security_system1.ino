#include <LiquidCrystal.h>
#include <Servo.h>

const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
int output;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
Servo servo;

void setup() {
  Serial.begin(9600);
  servo.attach(10);
  lcd.begin(16, 2);
  servo.write(90);
  lcd.print("-!Gate is off!-");
  delay(1000);
  lcd.setCursor(0, 0);
  lcd.print("Switch   on   to");
  lcd.setCursor(0, 1);
  lcd.print("      open");
  delay(1000);
  digitalWrite(9, HIGH);

}

void loop() {
  output = digitalRead(9);
  if (output == 0){
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("Switch is on....");
    delay(1000);
    lcd.setCursor(0,1);
    lcd.print("Gate is opening.");
    delay(1000);
    servo.write(0);
    delay(1000);
    lcd.setCursor(0,1);
    lcd.print("Gate is opend...");
    while(output == 0){
      output = digitalRead(9);
      delay(100);
      if(output == 1){
      	lcd.clear();
      	lcd.setCursor(0,0);
      	lcd.print("Switch is off...");
        delay(1000);
      	lcd.setCursor(0,1);
      	lcd.print("Gate is closing.");
      	delay(1000);
        servo.write(90);
        delay(1000);
      	lcd.setCursor(0,1);
      	lcd.print("Gate is closed..");
      	delay(3000);
        break;
      }
    }
  }
  else {
    delay(1000);
    lcd.clear();
  	servo.write(90);
  	lcd.setCursor(0, 0);
  	lcd.print("-!Gate is off!-");
  	delay(1000);
  	lcd.setCursor(0, 0);
  	lcd.print("Switch   on   to");
  	lcd.setCursor(0, 1);
  	lcd.print("      open");
  }
}