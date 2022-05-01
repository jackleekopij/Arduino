void setup() {
  Serial.begin(9600);
  pinMode(7, OUTPUT); // Set pin 7 to output
}

void loop() {
  digitalWrite(7, HIGH); // Set pin 7 as "high" or turn it on
  Serial.println("Should be on"); // prints that the pump should be on
  delay(5000); // 10 second delay
  digitalWrite(7, LOW); // Set pin 7 as "low" or turn it off
  Serial.println("Should be off"); // prints that the pump should be off
  delay(5000); // another 10 second delay
}
