void setup() {
Serial.begin(115200);
pinMode(5,OUTPUT);
pinMode(36,INPUT);
}
 

void loop() {
  int POT = analogRead(36);
  Serial.println(POT);
  if(POT>100)
  {
    Serial.println("led on");
    digitalWrite(5,HIGH);
    delay(100);
  }
  else
  {
    Serial.println("led off");
    digitalWrite(5,LOW);
    delay(100);
  }

}
