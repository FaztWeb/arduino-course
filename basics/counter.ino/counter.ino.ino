  void setup() {
    Serial.begin(9600);

  }

  int i = 0;
  void loop() {
    Serial.println(i++);
    delay(100);
  }
