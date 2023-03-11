int randomValue;


void setup() {
  Serial.begin(9600); // initialize serial communication
}

void loop() {
  randomValue = random(0, 1024); // generate a random analog
  randomValue = random(2); // generate a random value digital
  Serial.println(randomValue); // print the random value to the serial console
  delay(500); // wait for 1 second
}
