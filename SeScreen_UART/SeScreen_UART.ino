#include "GBT24LTR11.h"

//UART1


GBT24LTR11<HardwareSerial> GBT;
void setup() {
  // put your setup code here, to run once
  pinMode(OUTPUT_CTR_5V,OUTPUT);
  digitalWrite(OUTPUT_CTR_5V,LOW);//open 5V
  pinMode(OUTPUT_CTR_3V3,OUTPUT);
  digitalWrite(OUTPUT_CTR_3V3,LOW);//open 3v3
  Serial1.begin(115200);
  SerialUSB.begin(115200);
  GBT.init(Serial1);
  GBT.setMode(0);
  while (!GBT.setSpeedScope(2048, 0));
}

void loop() {
  // put your main code here, to run repeatedly:
  uint16_t maxspeed, minspeed;

  //View speed range
  if (GBT.getSpeedScope(&maxspeed, &minspeed)) {
    SerialUSB.print("maximum speed: ");
    SerialUSB.print(maxspeed);
    SerialUSB.print("     Minimum Speed: ");
    SerialUSB.println(minspeed);
  }
  delay(1000);
}
