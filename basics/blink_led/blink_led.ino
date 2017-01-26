//declare the led pin with PWM
int LED = 3;

void setup(){
  pinMode(LED, OUTPUT);
}

void loop(){
  // here we will fade the LED from 0 to maximum 255
  for(int i = 0; i < 256; i++){
    analogWrite(LED, i);
    delay(5);
  }
  for(int i = 255; i >= 0; i--){
    analogWrite(LED, i);
    delay(5);
  }
}

