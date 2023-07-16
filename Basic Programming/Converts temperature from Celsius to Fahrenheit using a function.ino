
void setup()
{
  Serial.begin(9600);
  
  float t = C_to_F(35);
  
  Serial.println(t);
  
  }
  
  
void loop()
{
  
}


float C_to_F( float c){
 
  float f = (c*9/5)+32;
  
  return f;
  
  
}
