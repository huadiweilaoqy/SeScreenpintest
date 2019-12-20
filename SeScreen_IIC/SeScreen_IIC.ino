#include "LIS3DHTR.h"
#include <Wire.h>
LIS3DHTR<TwoWire> LIS(0);//IIC
#define WIRE Wire1

void setup() {
  // put your setup code here, to run once:
  SerialUSB.begin(115200);
  while (!SerialUSB) {};
  LIS.begin(WIRE, 0x18); //IIC init
  delay(100);
  LIS.openTemp();//get Temperature
  LIS.setOutputDataRate(LIS3DHTR_DATARATE_50HZ);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (!LIS) {
    Serial.println("LIS3DHTR didn't connect.");
    while (1);
    return;
  }
  //3 axis
  Serial.print("x:"); Serial.print(LIS.getAccelerationX()); Serial.print("  ");
  Serial.print("y:"); Serial.print(LIS.getAccelerationY()); Serial.print("  ");
  Serial.print("z:"); Serial.println(LIS.getAccelerationZ());
  delay(500);
}
