#include <LiquidCrystal.h>

#define led 6

String data;

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup()
{
  pinMode(led, OUTPUT);
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
  digitalWrite(led, LOW);
  digitalWrite(LED_BUILTIN, LOW);
  lcd.begin(16, 2);                       
  lcd.setCursor (0,0);                   
  lcd.print("                ");
  lcd.setCursor (0,1);
  lcd.print("                ");
}

void loop()
{
  while( Serial.available() )
  {
    data="Unknown";
    data = Serial.readStringUntil('\n');
    if(data=="Unknown")
    {
      lcd.setCursor (0,0);
      lcd.print("Face Unidentified  ");
      digitalWrite(led, LOW);
      digitalWrite(LED_BUILTIN, LOW);
    }
    else
    {
      lcd.setCursor (0,0);
      lcd.print(data);
      digitalWrite(led, HIGH);
      digitalWrite(LED_BUILTIN, HIGH);
    }
    data="";
  }
}