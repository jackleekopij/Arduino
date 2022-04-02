#include <Servo.h> 
 
Servo myservo;  
 
void setup() 
{ 
  Serial.begin(9600);  
  myservo.attach(9);  
} 
 
void loop() 
{ 
  
  if (Serial.available()) {
    Serial.print("\nAngle available over serial: \n");
    
    int angle = Serial.parseInt();
    Serial.print(angle);
    
    if(angle<=180) 
    {
      myservo.write(angle);
    }
  }
}  
