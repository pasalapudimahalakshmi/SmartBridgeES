//the number of the led pin 
const int ledPin = 16;//16 corresponds to gpio16
//setting pwm properties 
const int freq = 5000;
const int ledChannel = 0;
const int resolution =8;
void setup() {
  //configure  led pwm functionalities//
  ledcSetup(ledChannel,freq,resolution);
  //attach the channel to the gpio to be controlled
  ledcAttachPin(ledPin,ledChannel);
}
void loop() {
 //increase the led brightness
 for(int dutyCycle = 0;dutyCycle<=255;dutyCycle++)
 {
  //changing the led brightness with pwm//
  ledcWrite(ledChannel,dutyCycle);
  delay(15);
 }

}
