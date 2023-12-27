
#include<LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(32,16,2);

int gasSensor = A0;

void setup()
{
 	Serial.begin(9600);
  	lcd.init();
  	lcd.setCursor(0,0);
  	lcd.backlight();
  	lcd.display();
}

void loop()
{
  int sensorValue = analogRead(gasSensor);
  Serial.println(sensorValue);
  
  if(sensorValue > 150){
    lcd.setCursor(0,0);
    lcd.print("   Gas Detected");
  }
  else{
    lcd.setCursor(0,0);
    lcd.print("No Gas Detected");
  }
}
