#include "GBT24LTR11.h"
GBT24LTR11<HardwareSerial> GBT;
//*********************************************************************
//RPI_D0 √ PWM √ A0 √
//RPI_D1 √ PWM √ A1 √
//RPI_D2 √ PWM √ A2 X 
//RPI_D3 √ PWM √ A3 X  
//RPI_D4 √ PWM √ A4 X
//RPI_D5 √        A5 √
//RPI_D6 √        A6 √
//RPI_D7 √        A7 √
//RPI_D8 √        A8 √
//*********************************************************************
//*********************************************************************
//修正A2、A3、A4
//Arduino15\packages\Seeeduino\hardware\samd\1.6.0\variants\rescreen\variant.cpp
//const PinDescription g_APinDescription
//{ PORTA, 4, PIO_ANALOG, (PIN_ATTR_ANALOG|PIN_ATTR_PWM_E), ADC_Channel14, TC0_CH0, TC0_CH0, EXTERNAL_INT_4 }, // 2/RPI_D2/RPI_A2
//{ PORTA, 6, PIO_ANALOG, (PIN_ATTR_ANALOG|PIN_ATTR_PWM_E), ADC_Channel16, TC1_CH0, TC1_CH0, EXTERNAL_INT_6 }, 
//{ PORTA, 7, PIO_ANALOG, (PIN_ATTR_ANALOG|PIN_ATTR_PWM_E), ADC_Channel17, TC1_CH1, TC1_CH1, EXTERNAL_INT_7 },
//改为：
//{ PORTA, 4, PIO_ANALOG, (PIN_ATTR_ANALOG|PIN_ATTR_PWM_E), ADC_Channel4, TC0_CH0, TC0_CH0, EXTERNAL_INT_4 }, // 2/RPI_D2/RPI_A2
//{ PORTA, 6, PIO_ANALOG, (PIN_ATTR_ANALOG|PIN_ATTR_PWM_E), ADC_Channel6, TC1_CH0, TC1_CH0, EXTERNAL_INT_6 }, 
//{ PORTA, 7, PIO_ANALOG, (PIN_ATTR_ANALOG|PIN_ATTR_PWM_E), ADC_Channel7, TC1_CH1, TC1_CH1, EXTERNAL_INT_7 },
//更改后A2、A3、A4正常
//
//*********************************************************************

int pin=RPI_D4;
int Apin=A4;
void setup() {
  // put your setup code here, to run once:
  pinMode(OUTPUT_CTR_5V,OUTPUT);
  digitalWrite(OUTPUT_CTR_5V,LOW);//open 5V
  pinMode(OUTPUT_CTR_3V3,OUTPUT);
  digitalWrite(OUTPUT_CTR_3V3,LOW);//open 3v3
  Serial.begin(115200);
  
//  pinMode(pin,INPUT);
//  pinMode(pin,OUTPUT);
}
void loop() {
  // put your main code here, to run repeatedly:
  
//*************** digital read *****************
//  Serial.println(digitalRead(pin));
//  delay(1000);

//*************** digital write *****************
//  digitalWrite(pin,HIGH);
//  delay(1000);
//  digitalWrite(pin,LOW);
//  delay(1000);


//*************** PWM *****************
//  for(int i=0;i<250;i++){
//    analogWrite(pin,i);
//    Serial.println(i);
//    delay(30);
//  }
//  delay(100);
//  for(int i=255;i>=0;i--){
//    analogWrite(pin,i);
//    Serial.println(i);
//    delay(30);
//  }
//  delay(1000);

//*************** analog *****************
//  Serial.println(analogRead(Apin));//****
//  delay(300);
}
