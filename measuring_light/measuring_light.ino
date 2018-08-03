// Read a Photoresistor in A0 Pin
const int LDRPin = A0;

void setup() {
    Serial.begin(9600);
    pinMode(LDRPin, INPUT);
}

void loop() {
    int sensorValue = analogRead(LDRPin);
    Serial.println(sensorValue);
    delay(10);
}
