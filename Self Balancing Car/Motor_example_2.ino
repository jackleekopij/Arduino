
// Motor A
int enA = 9;
int in1 = 8;
int in2 = 7;


void setup() {
  // set motor control pins
  pinMode(enA, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  // Turn on motor A 
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);

  // set speed of motor A - values between 0~255
  analogWrite(enA, 250);

  delay(15000);
  
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);

  delay(5000);
  
}
