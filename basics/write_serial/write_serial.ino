
void setup() {
  Serial.begin(9600);

}

void loop() {
  int incoming = 0;
  if (Serial.available() > 0) {
    incoming = Serial.parseInt();

    if (Serial.read() == "\n") {

    }
  }
}
