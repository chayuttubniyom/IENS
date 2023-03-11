const int POT_PIN = A0; // analog input pin

void setup() {
  Serial.begin(9600);
}

void loop() {
  int potValue = analogRead(POT_PIN);
  if (potValue < 341) {
    Serial.println("Potentiometer value is low");
  } else if (potValue >= 341 && potValue < 682) {
    Serial.println("Potentiometer value is medium");
  } else {
    Serial.println("Potentiometer value is high");
  }
  delay(100);
}
