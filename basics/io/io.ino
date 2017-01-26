void setup() {
  // set pin 2 as a digital output
  pinMode(2, OUTPUT);
  // set pin 3 as a digital input
  pinMode(3, INPUT);
}

void loop() {
  // set pin 2 as HIGH  
  digitalWrite(2, HIGH);
  // wait 100 milliseconds
  delay(100);
  //set pin 2 as LOW
  digitalWrite(2, LOW);
  // wait 100 milliseconds
  delay(100);

  int pinValue = digitalRead(3);
}
