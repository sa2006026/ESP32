// the number of the LED pin
const int ledPin = 25
;  // 16 corresponds to GPIO16

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
    for(int dutyCycle = 255; dutyCycle >0; dutyCycle--){
      ledcWrite(ledChannel, dutyCycle);
      delay(50);
    }
    for(int dutyCycle = 0; dutyCycle <255; dutyCycle++){
      ledcWrite(ledChannel, dutyCycle);
      delay(50);
    }

}
