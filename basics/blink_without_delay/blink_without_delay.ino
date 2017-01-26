//variables for keeping the provious LED state
int previousLEDstate = LOW;

//last time the LED changed state
unsigned long lastTime = 0; 

//interval between the blinks in milliseconds
int interval = 1000; 

void setup() {
  // declare the pin for LED as OUTPUT
  pinMode(LED_BUILTIN, OUTPUT);
  
}

void loop() {
  
  //read the current time
  unsigned long currentTime = millis();
  
  // compare the current time with the last time
  if(currentTime - lastTime >= interval){
    //first set the previous time to the current time
    lastTime = currentTime;

     // then we inverse the state of the LED
     if(previousLEDstate == HIGH){
      digitalWrite(LED_BUILTIN, LOW);
      previousLEDstate = LOW;
     } else{
      digitalWrite(LED_BUILTIN, HIGH);
      previousLEDstate = HIGH;
     }
  }
}
