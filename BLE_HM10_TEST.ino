/*
 The circuit:
 * RX is digital pin 12 (connect to TX of other device)
 * TX is digital pin 13 (connect to RX of other device)
 Console Display Set:No End Line
 */
#include <SoftwareSerial.h>

SoftwareSerial mySerial(12, 13); // RX, TX
String getword="0";
bool geted=0;

void setup() {
  // Open serial communications and wait for port to open:Arduino
  Serial.begin(115200);
  Serial.println("BAUE SET OK");
   while (!Serial) {
    ; // wait for serial port to connect. Needed for native USB port only
  }
  // set the data rate for the SoftwareSerial port -HM10
  mySerial.begin(9600);
  Serial.println("HM10 BAUE SET OK!!");
}

void loop() { 
 
 //Detect 12 Pin(RX) Signal ->HM!0-->Ardunio-->PC Console
 while(mySerial.available())
{
  geted=1;
  getword+=(char)mySerial.read();
  delay(10);
}
if(geted){
  Serial.print(getword);
  getword="";
  geted=0;
}

//Detect Keyboard Signal->Keyboard-->HM10
 while(Serial.available())
{
  geted=1;
  getword+=(char)Serial.read();
  delay(10);
}
//TX Write Data
if(geted){
  mySerial.print(getword);
  getword="";
  geted=0;
}

}

