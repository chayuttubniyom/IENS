const int POT_PIN = A0; // analog input pin


void setup() {
  Serial.begin(9600);
}

void loop() {
  int potValue = analogRead(POT_PIN);
  Serial.println(potValue);
  delay(100);
}