
void setup() 
{ 
  Serial.begin(9600);  
} 
 
void loop() 
{ 
  
  if (Serial.available()) {
    Serial.print("\nAngle available over serial: \n");
    
    int angle = Serial.parseInt();
    Serial.print(angle);
    
  }
}  
