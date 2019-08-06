//                            Programm für den Jahreszeitraffer --  Programm für den Teil Januar 2020 
#include <Wire.h>
#include "DS3231.h"
RTClib RTC;
 
 
// Initialisierungen für Auslösengen vom 01.01. 2020 bis zum 31.01.2020
int i = 0;

 const int J1 = 2020;
 const int M1 = 1;
 const int T1 = 1;
 const int h1 = 8;
 const int m1 = 17;
 const int s1 = 0;

 const int J2 = 2020;
 const int M2 = 1;
 const int T2 = 2;
 const int h2 = 8;
 const int m2 = 18;
 const int s2 = 21;

 const int J3 = 2020;
 const int M3 = 1;
 const int T3 = 3;
 const int h3 = 8;
 const int m3 = 19;
 const int s3 = 42;

 const int J4 = 2020;
 const int M4 = 1;
 const int T4 = 4;
 const int h4 = 8;
 const int m4 = 21;
 const int s4 = 3;

 const int J5 = 2020;
 const int M5 = 1;
 const int T5 = 5;
 const int h5 = 8;
 const int m5 = 22;
 const int s5 = 24;

 const int J6 = 2020;
 const int M6 = 1;
 const int T6 = 6;
 const int h6 = 8;
 const int m6 = 23;
 const int s6 = 45;

 const int J7 = 2020;
 const int M7 = 1;
 const int T7 = 7;
 const int h7 = 8;
 const int m7 = 25;
 const int s7 = 6;

 const int J8 = 2020;
 const int M8 = 1;
 const int T8 = 8;
 const int h8 = 8;
 const int m8 = 26;
 const int s8 = 27;

 const int J9 = 2020;
 const int M9 = 1;
 const int T9 = 9;
 const int h9 = 8;
 const int m9 = 27;
 const int s9 = 48;

 const int J10 = 2020;
 const int M10 = 1;
 const int T10 = 10;
 const int h10 = 8;
 const int m10 = 29;
 const int s10 = 9;

 const int J11 = 2020;
 const int M11 = 1;
 const int T11 = 11;
 const int h11 = 8;
 const int m11 = 30;
 const int s11 = 30;

 const int J12 = 2020;
 const int M12 = 1;
 const int T12 = 12;
 const int h12 = 8;
 const int m12 = 31;
 const int s12 = 51;

 const int J13 = 2020;
 const int M13 = 1;
 const int T13 = 13;
 const int h13 = 8;
 const int m13 = 33;
 const int s13 = 12;

 const int J14 = 2020;
 const int M14 = 1;
 const int T14 = 14;
 const int h14 = 8;
 const int m14 = 34;
 const int s14 = 33;

 const int J15 = 2020;
 const int M15 = 1;
 const int T15 = 15;
 const int h15 = 8;
 const int m15 = 35;
 const int s15 = 54;

 const int J16 = 2020;
 const int M16 = 1;
 const int T16 = 16;
 const int h16 = 8;
 const int m16 = 37;
 const int s16 = 15;

 const int J17 = 2020;
 const int M17 = 1;
 const int T17 = 17;
 const int h17 = 8;
 const int m17 = 38;
 const int s17 = 36;

 const int J18 = 2020;
 const int M18 = 1;
 const int T18 = 18;
 const int h18 = 8;
 const int m18 = 39;
 const int s18 = 57;

 const int J19 = 2020;
 const int M19 = 1;
 const int T19 = 19;
 const int h19 = 8;
 const int m19 = 41;
 const int s19 = 18;

 const int J20 = 2020;
 const int M20 = 1;
 const int T20 = 20;
 const int h20 = 8;
 const int m20 = 42;
 const int s20 = 39;

 const int J21 = 2020;
 const int M21 = 1;
 const int T21 = 21;
 const int h21 = 8;
 const int m21 = 44;
 const int s21 = 0;

 const int J22 = 2020;
 const int M22 = 1;
 const int T22 = 22;
 const int h22 = 8;
 const int m22 = 45;
 const int s22 = 21;

 const int J23 = 2020;
 const int M23 = 1;
 const int T23 = 23;
 const int h23 = 8;
 const int m23 = 46;
 const int s23 = 42;

 const int J24 = 2020;
 const int M24 = 1;
 const int T24 = 24;
 const int h24 = 8;
 const int m24 = 48;
 const int s24 = 3;

 const int J25 = 2020;
 const int M25 = 1;
 const int T25 = 25;
 const int h25 = 8;
 const int m25 = 49;
 const int s25 = 24;

 const int J26 = 2020;
 const int M26 = 1;
 const int T26 = 26;
 const int h26 = 8;
 const int m26 = 50;
 const int s26 = 45;

 const int J27 = 2020;
 const int M27 = 1;
 const int T27 = 27;
 const int h27 = 8;
 const int m27 = 52;
 const int s27 = 6;

 const int J28 = 2020;
 const int M28 = 1;
 const int T28 = 28;
 const int h28 = 8;
 const int m28 = 53;
 const int s28 = 27;

 const int J29 = 2020;
 const int M29 = 1;
 const int T29 = 29;
 const int h29 = 8;
 const int m29 = 54;
 const int s29 = 48;

 const int J30 = 2020;
 const int M30 = 1;
 const int T30 = 30;
 const int h30 = 8;
 const int m30 = 56;
 const int s30 = 9;

 const int J31 = 2020;
 const int M31 = 1;
 const int T31 = 31;
 const int h31 = 8;
 const int m31 = 57;
 const int s31 = 30;

 


void setup () {
    pinMode(3, OUTPUT);
    Wire.begin();
    Serial.begin(9600);
}

void loop () 
{ DateTime now = RTC.now();
          
                if (J1 == now.year() && M1 == now.month() && T1 == now.day() && h1 == now.hour() && m1 == now.minute() && s1 == now.second())
                {  
                  for(i = 0; i < 9; i++)
                { 
                  digitalWrite(3, HIGH);
                  delay(500);
                  digitalWrite(3, LOW);
                  delay(8500);
                }  
                  }

                 
                 if (J2 == now.year() && M2 == now.month() && T2 == now.day() && h2 == now.hour() && m2 == now.minute() && s2 == now.second())
                {  
                  for(i = 0; i < 9; i++)
                { 
                  digitalWrite(3, HIGH);
                  delay(500);
                  digitalWrite(3, LOW);
                  delay(8500);
                }
                  }

                 
                 if (J3 == now.year() && M3 == now.month() && T3 == now.day() && h3 == now.hour() && m3 == now.minute() && s3 == now.second())
                {  
                  for(i = 0; i < 9; i++)
                { 
                  digitalWrite(3, HIGH);
                  delay(500);
                  digitalWrite(3, LOW);
                  delay(8500);
                }
                  }
                 
                 if (J4 == now.year() && M4 == now.month() && T4 == now.day() && h4 == now.hour() && m4 == now.minute() && s4 == now.second())
                {  
                  for(i = 0; i < 9; i++)
                { 
                  digitalWrite(3, HIGH);
                  delay(500);
                  digitalWrite(3, LOW);
                  delay(8500);
                }
                  }
                 
                 if (J5 == now.year() && M5 == now.month() && T5 == now.day() && h5 == now.hour() && m5 == now.minute() && s5 == now.second())
                {  
                  for(i = 0; i < 9; i++)
                { 
                  digitalWrite(3, HIGH);
                  delay(500);
                  digitalWrite(3, LOW);
                  delay(8500);
                }
                  } 
                 
                 if (J6 == now.year() && M6 == now.month() && T6 == now.day() && h6 == now.hour() && m6 == now.minute() && s6 == now.second())
                {  
                  for(i = 0; i < 9; i++)
                { 
                  digitalWrite(3, HIGH);
                  delay(500);
                  digitalWrite(3, LOW);
                  delay(8500);
                }
                  }
                 
                 
                  if (J7 == now.year() && M7 == now.month() && T7 == now.day() && h7 == now.hour() && m7 == now.minute() && s7 == now.second())
                {  
                  for(i = 0; i < 9; i++)
                { 
                  digitalWrite(3, HIGH);
                  delay(500);
                  digitalWrite(3, LOW);
                  delay(8500);
                }
                  }
                             
                  if (J8 == now.year() && M8 == now.month() && T8 == now.day() && h8 == now.hour() && m8 == now.minute() && s8 == now.second())
                {  
                  for(i = 0; i < 9; i++)
                { 
                  digitalWrite(3, HIGH);
                  delay(500);
                  digitalWrite(3, LOW);
                  delay(8500);
                }  
                  }

                 
                 if (J9 == now.year() && M9 == now.month() && T9 == now.day() && h9 == now.hour() && m9 == now.minute() && s9 == now.second())
                {  
                  for(i = 0; i < 9; i++)
                { 
                  digitalWrite(3, HIGH);
                  delay(500);
                  digitalWrite(3, LOW);
                  delay(8500);
                }
                  }

                 
                 if (J10 == now.year() && M10 == now.month() && T10 == now.day() && h10 == now.hour() && m10 == now.minute() && s10 == now.second())
                {  
                  for(i = 0; i < 9; i++)
                { 
                  digitalWrite(3, HIGH);
                  delay(500);
                  digitalWrite(3, LOW);
                  delay(8500);
                }
                  }
                 
                 if (J11 == now.year() && M11 == now.month() && T11 == now.day() && h11 == now.hour() && m11 == now.minute() && s11 == now.second())
                {  
                  for(i = 0; i < 9; i++)
                { 
                  digitalWrite(3, HIGH);
                  delay(500);
                  digitalWrite(3, LOW);
                  delay(8500);
                }
                  }
                 
                 if (J12 == now.year() && M12 == now.month() && T12 == now.day() && h12 == now.hour() && m12 == now.minute() && s12 == now.second())
                {  
                  for(i = 0; i < 9; i++)
                { 
                  digitalWrite(3, HIGH);
                  delay(500);
                  digitalWrite(3, LOW);
                  delay(8500);
                }
                  } 
                 
                 if (J13 == now.year() && M13 == now.month() && T13 == now.day() && h13 == now.hour() && m13 == now.minute() && s13 == now.second())
                {  
                  for(i = 0; i < 9; i++)
                { 
                  digitalWrite(3, HIGH);
                  delay(500);
                  digitalWrite(3, LOW);
                  delay(8500);
                }
                  }
                 
                 
                  if (J14 == now.year() && M14 == now.month() && T14 == now.day() && h14 == now.hour() && m14 == now.minute() && s14 == now.second())
                {  
                  for(i = 0; i < 9; i++)
                { 
                  digitalWrite(3, HIGH);
                  delay(500);
                  digitalWrite(3, LOW);
                  delay(8500);
                }
                  }

                if (J15 == now.year() && M15 == now.month() && T15 == now.day() && h15 == now.hour() && m15 == now.minute() && s15 == now.second())
                {  
                  for(i = 0; i < 9; i++)
                { 
                  digitalWrite(3, HIGH);
                  delay(500);
                  digitalWrite(3, LOW);
                  delay(8500);
                }  
                  }

                 
                 if (J16 == now.year() && M16 == now.month() && T16 == now.day() && h16 == now.hour() && m16 == now.minute() && s16 == now.second())
                {  
                  for(i = 0; i < 9; i++)
                { 
                  digitalWrite(3, HIGH);
                  delay(500);
                  digitalWrite(3, LOW);
                  delay(8500);
                }
                  }

                 
                 if (J17 == now.year() && M17 == now.month() && T17 == now.day() && h17 == now.hour() && m17 == now.minute() && s17 == now.second())
                {  
                  for(i = 0; i < 9; i++)
                { 
                  digitalWrite(3, HIGH);
                  delay(500);
                  digitalWrite(3, LOW);
                  delay(8500);
                }
                  }
                 
                 if (J18 == now.year() && M18 == now.month() && T18 == now.day() && h18 == now.hour() && m18 == now.minute() && s18 == now.second())
                {  
                  for(i = 0; i < 9; i++)
                { 
                  digitalWrite(3, HIGH);
                  delay(500);
                  digitalWrite(3, LOW);
                  delay(8500);
                }
                  }
                 
                 if (J19 == now.year() && M19 == now.month() && T19 == now.day() && h19 == now.hour() && m19 == now.minute() && s19 == now.second())
                {  
                  for(i = 0; i < 9; i++)
                { 
                  digitalWrite(3, HIGH);
                  delay(500);
                  digitalWrite(3, LOW);
                  delay(8500);
                }
                  } 
                 
                 if (J20 == now.year() && M20 == now.month() && T20 == now.day() && h20 == now.hour() && m20 == now.minute() && s20 == now.second())
                {  
                  for(i = 0; i < 9; i++)
                { 
                  digitalWrite(3, HIGH);
                  delay(500);
                  digitalWrite(3, LOW);
                  delay(8500);
                }
                  }
                 
                 
                  if (J21 == now.year() && M21 == now.month() && T21 == now.day() && h21 == now.hour() && m21 == now.minute() && s21 == now.second())
                {  
                  for(i = 0; i < 9; i++)
                { 
                  digitalWrite(3, HIGH);
                  delay(500);
                  digitalWrite(3, LOW);
                  delay(8500);
                }
                  }

                if (J22 == now.year() && M22 == now.month() && T22 == now.day() && h22 == now.hour() && m22 == now.minute() && s22 == now.second())
                {  
                  for(i = 0; i < 9; i++)
                { 
                  digitalWrite(3, HIGH);
                  delay(500);
                  digitalWrite(3, LOW);
                  delay(8500);
                }  
                  }

                 
                 if (J23 == now.year() && M23 == now.month() && T23 == now.day() && h23 == now.hour() && m23 == now.minute() && s23 == now.second())
                {  
                  for(i = 0; i < 9; i++)
                { 
                  digitalWrite(3, HIGH);
                  delay(500);
                  digitalWrite(3, LOW);
                  delay(8500);
                }
                  }

                 
                 if (J24 == now.year() && M24 == now.month() && T24 == now.day() && h24 == now.hour() && m24 == now.minute() && s24 == now.second())
                {  
                  for(i = 0; i < 9; i++)
                { 
                  digitalWrite(3, HIGH);
                  delay(500);
                  digitalWrite(3, LOW);
                  delay(8500);
                }
                  }
                 
                 if (J25 == now.year() && M25 == now.month() && T25 == now.day() && h25 == now.hour() && m25 == now.minute() && s25 == now.second())
                {  
                  for(i = 0; i < 9; i++)
                { 
                  digitalWrite(3, HIGH);
                  delay(500);
                  digitalWrite(3, LOW);
                  delay(8500);
                }
                  }
                 
                 if (J26 == now.year() && M26 == now.month() && T26 == now.day() && h26 == now.hour() && m26 == now.minute() && s26 == now.second())
                {  
                  for(i = 0; i < 9; i++)
                { 
                  digitalWrite(3, HIGH);
                  delay(500);
                  digitalWrite(3, LOW);
                  delay(8500);
                }
                  } 
                 
                 if (J27 == now.year() && M27 == now.month() && T27 == now.day() && h27 == now.hour() && m27 == now.minute() && s27 == now.second())
                {  
                  for(i = 0; i < 9; i++)
                { 
                  digitalWrite(3, HIGH);
                  delay(500);
                  digitalWrite(3, LOW);
                  delay(8500);
                }
                  }
                 
                 
                  if (J28 == now.year() && M28 == now.month() && T28 == now.day() && h28 == now.hour() && m28 == now.minute() && s28 == now.second())
                {  
                  for(i = 0; i < 9; i++)
                { 
                  digitalWrite(3, HIGH);
                  delay(500);
                  digitalWrite(3, LOW);
                  delay(8500);
                }
                  }
               if (J29 == now.year() && M29 == now.month() && T29 == now.day() && h29 == now.hour() && m29 == now.minute() && s29 == now.second())
                {  
                  for(i = 0; i < 9; i++)
                { 
                  digitalWrite(3, HIGH);
                  delay(500);
                  digitalWrite(3, LOW);
                  delay(8500);
                }
                  } 
                 
                 if (J30 == now.year() && M30 == now.month() && T30 == now.day() && h30 == now.hour() && m30 == now.minute() && s30 == now.second())
                {  
                  for(i = 0; i < 9; i++)
                { 
                  digitalWrite(3, HIGH);
                  delay(500);
                  digitalWrite(3, LOW);
                  delay(8500);
                }
                  }
                 
                 
                  if (J31 == now.year() && M31 == now.month() && T31 == now.day() && h31 == now.hour() && m31 == now.minute() && s31 == now.second())
                {  
                  for(i = 0; i < 9; i++)
                { 
                  digitalWrite(3, HIGH);
                  delay(500);
                  digitalWrite(3, LOW);
                  delay(8500);
                }
                  }
                    }
          
