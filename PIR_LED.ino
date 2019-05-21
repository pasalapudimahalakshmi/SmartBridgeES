void setup() {
  Serial.begin(115200);
  pinMode(5,OUTPUT);
  pinMode(4,INPUT);
  
}

void loop() {
  
  int PIR = digitalRead(4);
  if(PIR >= 1)
  {
  Serial.println("presence detected");
  digitalWrite(5,HIGH);
  delay(100);
  }
else
{
  Serial.println("presence not detected");
  digitalWrite(5,LOW);
  
}
}
