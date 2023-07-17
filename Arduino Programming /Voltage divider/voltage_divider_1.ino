void setup(){
 
  Serial.begin(9600); 
}

void loop(){
 
  int resistance1 = analogRead(A0);
  
  float r1 = resistance1;
  
  float res1 = r1/1023*5;
  Serial.print("Voltage Consumed by R1: ");
  Serial.print(res1); Serial.println("V");
  
  float res2 = 5-res1;
  
  Serial.print("Voltage Consumed by R2: ");
  Serial.print(res2); Serial.println("V");
  
  
  
}