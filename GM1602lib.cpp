#include "GM1602lib.h"

GM1602::GM1602(int pin,int voltage)
{
  _pin = pin;
  _vol = voltage;
  pinMode(_pin, OUTPUT);
}

double GM1602::ppm()
{
    VolVal = (double)analogRead(_pin);
    if(_vol==5)
      return VolVal*VolToPpm5V;
    else if(_vol==3)
      return VolVal*VolToPpm3V;
    else
      return 0;
}

int GM1602::vol()
{
  return analogRead(_pin); 
}

