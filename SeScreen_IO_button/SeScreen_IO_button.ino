void setup() {
  // put your setup code here, to run once:
  pinMode(OUTPUT_CTR_5V,OUTPUT);
  digitalWrite(OUTPUT_CTR_5V,LOW);//open 5V
  pinMode(OUTPUT_CTR_3V3,OUTPUT);
  digitalWrite(OUTPUT_CTR_3V3,LOW);//open 3v3
  Serial.begin(115200);
  pinMode(BUTTON_1,INPUT);
  
  pinMode(BUTTON_2,INPUT);
  
  pinMode(BUTTON_3,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 Serial.print("1:");Serial.println(digitalRead(BUTTON_1));
 Serial.print("2:");Serial.println(digitalRead(BUTTON_2));
 Serial.print("3:");Serial.println(digitalRead(BUTTON_3));
 delay(1000);
}
