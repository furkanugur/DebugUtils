#define __DEBUG__ 1
#define __DEBUG_PORT__ mySerial
#include <DebugUtils.h>
#include <SoftwareSerial.h>

SoftwareSerial mySerial(5, 6); // RX, TX

void setup() {
  Serial.begin(38400);
  mySerial.begin(38400);
  mySerial.println("DEBUG");
}

void loop() {
  Serial.println("NORMAL");
  LOG("Test");
  delay(1000);

}
