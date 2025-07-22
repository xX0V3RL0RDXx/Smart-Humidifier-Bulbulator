#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
#include <dht11.h>


#define DHT11PIN 4
#define HUMVCPIN 3

#define BUTTONUP 12
#define BUTTONSET 13 

LiquidCrystal_I2C lcd(0x27,20,4);

dht11 DHT11;

int TRIGERHUM = 0;
void setup()
{
  pinMode(BUTTONUP, INPUT_PULLUP);   // 12
  pinMode(BUTTONSET, INPUT_PULLUP);  // 13

  pinMode(HUMVCPIN, OUTPUT);

  digitalWrite(HUMVCPIN, LOW);

  lcd.init();                      
  lcd.backlight();
  Serial.begin(9600);
  menu();
}

void menu()
{

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("==-BULBULATOR-==");
  lcd.setCursor(0, 1);
  lcd.print("Hum:");
  lcd.setCursor(6, 1);
  lcd.print("% Tri:");
  lcd.setCursor(14, 1);
  lcd.print("%");
}

void loop()
{


  Serial.println();

 int chk = DHT11.read(DHT11PIN);

 lcd.setCursor(4, 1);
 lcd.print((int)DHT11.humidity);
 delay(300);
 lcd.setCursor(12, 1);
 lcd.print(TRIGERHUM);

 if(digitalRead(BUTTONUP) == 0)
 {

  for(;;)
  {

    lcd.setCursor(12, 1);
    lcd.print("  ");

    if(digitalRead(BUTTONSET) == 0)
    {
      break;
    }

    delay(100);
    if(digitalRead(BUTTONUP) == 0)
    {

      if(0 <= TRIGERHUM && TRIGERHUM < 99 )
      {
        TRIGERHUM = TRIGERHUM + 1;
      }
      else
      {
        TRIGERHUM = 0;
      }
    }

    lcd.setCursor(12, 1);
    lcd.print(TRIGERHUM);
    delay(500);
  }
 }
 if(DHT11.humidity < TRIGERHUM)
 {
  digitalWrite(HUMVCPIN, HIGH);
 }else
 {
  digitalWrite(HUMVCPIN, LOW);
 }
}
