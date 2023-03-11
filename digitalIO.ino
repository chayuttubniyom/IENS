const int buttonRED = 16;    // D0
const int buttonYELLOW = 5;  // D1
const int buttonGREEN = 4;   // D2
const int ledRED = 14;       // D5
const int ledYELLOW = 12;    // D6
const int ledGREEN = 13;     // D7

void setup() {
  pinMode(buttonRED, INPUT);
  pinMode(buttonYELLOW, INPUT);
  pinMode(buttonGREEN, INPUT);
  pinMode(ledRED, OUTPUT);
  pinMode(ledYELLOW, OUTPUT);
  pinMode(ledGREEN, OUTPUT);
}
void loop() {
  while (digitalRead(buttonRED) == LOW) {
    digitalWrite(ledRED, HIGH);
  }
  while (digitalRead(buttonYELLOW) == LOW) {
    digitalWrite(ledYELLOW, HIGH);
  }
  while (digitalRead(buttonGREEN) == LOW) {
    digitalWrite(ledGREEN, HIGH);
  }
  digitalWrite(ledRED, 0);
  digitalWrite(ledYELLOW, 0);
  digitalWrite(ledGREEN, 0);
  delay(10);
}
