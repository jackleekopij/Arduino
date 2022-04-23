int write_value = 42; 
void setup() 
{ 
  Serial.begin(9600);

} 
 
void loop() 
{ 
  Serial.print("value written\n");
  Serial.print(write_value);
  Serial.print("\n");
  Serial.write(write_value); 
  delay(500);                           
} 
