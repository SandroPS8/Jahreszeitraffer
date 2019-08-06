#include <LiquidCrystal.h>
#include <Wire.h>
#include "RTClib.h"
 
RTC_DS3231 rtc;

const int relayPin = 8;

int relayState = 0;
int counter = 0;
int relayStateHIGH = 0;
int Secs;
int Minutes;
int Hours;
 
String myTime; 
 
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
 
void setup () 
{
  Serial.begin(9600);
  lcd.begin(16, 2);
  pinMode(relayPin, INPUT);
  delay(3000); // wait for console opening
 
  if (! rtc.begin()) {
    Serial.println("Couldn't find RTC");
    while (1);
  }
 
  if (rtc.lostPower()) {
    Serial.println("RTC lost power, lets set the time!");

  }
}
 
void loop () 
{
relayState = digitalRead(relayPin);
 if (relayState == HIGH) 
 {     
   relayStateHIGH = 1;
 } 
 if (relayState == LOW && relayStateHIGH == 1)
 {
   counter++;
   relayStateHIGH = 0;
 }
  {
DateTime now = rtc.now();
lcd.clear();        
Secs = now.second(); 
Hours = now.hour(); 
Minutes = now.minute(); 

myTime = myTime + Hours +":"+ Minutes +":" + Secs ; 
// send to serial monitor
Serial.println(myTime);
//Print on lcd
lcd.setCursor(0,0);
lcd.print("Time: no RTC!   ");
lcd.print(myTime); 
lcd.setCursor(0,1); 
lcd.print("Frames:   ");   
myTime = ""; 
lcd.print(counter);
delay(210);
}
}
