int angle = 0; 
int increase = 1; 

void setup() 
{ 
  Serial.begin(9600);

} 
 
void loop() 
{ 
  if(increase == 1){
    angle = angle + 10;
  }
  else{
    angle = angle - 10;
  }
  
  if(angle > 180){
    angle = 180;
    increase = 0;
  }

  if(angle < 0){
    angle = 0;
    increase = 1;
  }

  //Serial.print("angle written ");
  Serial.print(angle);
  Serial.print("\n");
  Serial.write(angle); 
  delay(200);                           
} 
