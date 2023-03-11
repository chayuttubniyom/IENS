int grade;
void setup() {
  Serial.begin(9600);
  while (!Serial);
}
void loop() {
  Serial.print("Enter your numeric grade: ");
  while (Serial.available() == 0);
  grade = Serial.parseInt();
  Serial.println(grade);
  if (grade < 50) {
    Serial.println("Your letter grade is F");
  }
  else if (grade < 60) {
    Serial.println("Your letter grade is D");
  }
  else if (grade < 70) {
    Serial.println("Your letter grade is C");
  }
  else if (grade < 80) {
    Serial.println("Your letter grade is B");
  }
  else if (grade < 100){
    Serial.println("Your letter grade is A");
  }
  else if (grade > 100){
    Serial.println("Wrong value");
  }
  while (Serial.available() > 0) {
    Serial.read();
  }
  delay(100);
}
