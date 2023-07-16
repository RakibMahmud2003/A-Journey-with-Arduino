
void setup()
{
  Serial.begin(9600);
  
  float a = Average(3,4,5);
  
  
  Serial.print("Average is : ");
  Serial.print(a);
 
  
  }
  
  
void loop()
{
  
}


float Average(float a, float b, float c){
  
  float avg = (a+b+c)/3;
  
  return avg;
  
}
