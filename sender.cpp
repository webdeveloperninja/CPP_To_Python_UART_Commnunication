#define ONBOARD_LED  2
#include <SoftwareSerial.h>

const byte rxPin = 16;
const byte txPin = 17;
SoftwareSerial mySerial(rxPin, txPin);

String message = "";

void setup() {
  pinMode(ONBOARD_LED,OUTPUT);

  Serial.begin(115200);
  mySerial.begin(9600);

  while (!Serial) {
    ; // wait for serial port to connect. Needed for Native USB only
  }
}
 
void loop() {
  mySerial.write("Hello Xbee I am esp32");
  delay(1000);
//  if (mySerial.available()) {
//    while (mySerial.available()) {
//      char cha = mySerial.read();
//      message.concat(cha);
//      delay(1000);
//      Serial.println(message);
//    }                         
//  }
}