#include <GM1602lib.h>
const int Co=A0;//set input pin
GM1602 GM1602(Co,5);// initialize GM1602 as 5V mode
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {
  double co = GM1602.ppm(); // Read GM1602 ppm
  // print out the value you read:
  Serial.println(co);
  delay(1);        // delay in between reads for stability
}
