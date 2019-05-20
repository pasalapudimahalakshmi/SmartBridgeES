void setup() {
  Serial.begin(115200);
  pinMode(2,OUTPUT);
  }

void loop() {
  Serial.println("low");
  
  digitalWrite(2,LOW);
    delay(100);
    Serial.println("HIGH");
    digitalWrite(2,HIGH);
      delay(100);
  

}
