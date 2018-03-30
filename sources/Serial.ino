/*
  Pont serie
  fil entre PC10 et PA2
  fil entre PC11 et PA3
*/

//#include <HardwareSerial.h>

HardwareSerial Serial3(PC_11, PC_10); //rx tx

void setup() 
{
  Serial.begin(9600);
  Serial3.begin(115200);
}

// the loop function runs over and over again forever
void loop() 
{
  char c;

  if (Serial3.available() > 0) 
  {
        c = Serial3.read();
        Serial.print(c);
  }
  if (Serial.available() > 0) 
  {
        c = Serial.read();
        Serial3.print(c);
  }
}
