// the number of the LED pin
const int ledPin = 25
;  // 16 corresponds to GPIO16
int dutyCycle = 255;
// setting PWM properties
const int freq = 5000;
const int ledChannel = 0;
const int resolution = 8;
 
void setup(){
  // configure LED PWM functionalitites
  ledcSetup(ledChannel, freq, resolution);
  
  // attach the channel to the GPIO to be controlled
  ledcAttachPin(ledPin, ledChannel);
}
 
void loop(){

    ledcWrite(ledChannel, dutyCycle);
    delay(15);


}
