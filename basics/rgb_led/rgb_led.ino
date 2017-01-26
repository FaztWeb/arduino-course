//we use a common anode (+) RGB LED. This means that
//we control the current that goes into the Arduino pin—and not out—as we
//usually do. Code-wise in this configuration, when we turn the pin to HIGH or
//to 255, the LED will be OFF. This is the reason for the 255 – redValue
//parameter; it inverts the value.


// declare the PWM LED pins
int redLED = 3;
int greenLED = 10;
int blueLED = 11;

void setup() {
  //declare the pins for the LED as OUTPUT  
  pinMode(redLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
  pinMode(blueLED, OUTPUT);
}

void setColor(int redValue, int greenValue, int blueValue){
  analogWrite(redLED, 255 -redValue);
  analogWrite(greenLED, 255 - greeValue);
  analogWrite(blueLED, 255 - blueValue);
}

void loop() {
  // change Colors
  
  setColor(255, 0, 0); // RED COLOR
  delay(500);

  setColor(0, 255, 0); // GREEN COLOR
  delay(500);

  setColor(0, 0, 255); // BLUE COLOR
  delay(500);

  setColor(255, 255, 0); // Yellow
  delay(500);
  
  setColor(0, 255, 255); // Cyan
  delay(500);

  setColor(255, 255, 255); // White
  delay(500);
}
