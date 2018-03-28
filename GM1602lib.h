/*
  Morse.h - Library for flashing Morse code.
  Created by David A. Mellis, November 2, 2007.
  Released into the public domain.
*/

#ifndef GM1602lib_h
#define GM1602lib_h
#include <Arduino.h>
#define VolToPpm5V 4.8875855
#define VolToPpm3V 3.1280547
class GM1602
{
  public:
    GM1602(int pin,int voltage);
    double ppm();
    //轉換成ppm
    int vol();
    //取得電壓
  private:
    int _pin;
    int _vol;
    double VolVal;
};

#endif

