
void setup()
{
	Serial.begin(9600);
}
void loop()
{
  if(Serial.available()>0){
   int number = Serial.parseInt();
    
    for(int i = 1; i<=10; i++){
      int mul = number * i;
      
      Serial.print(number);
    Serial.print("X");
    Serial.print(i);
    Serial.print("=");
    Serial.println(mul);
  }
  }
    
}               
                   
