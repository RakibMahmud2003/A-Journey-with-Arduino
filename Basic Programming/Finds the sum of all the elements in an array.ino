
void setup()
{
  Serial.begin(9600);
  
  int array[3] = {3,4,5};
  
  float sum = 0;
  
  for(int i =0; i<3 ; i++){
    
    sum = sum + array[i];
    
  }
  
  Serial.print("Sum: "); 
  Serial.print(sum);
  
}
void loop()
{
  
}
