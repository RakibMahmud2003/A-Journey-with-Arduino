
void setup()
{
	Serial.begin(9600);
  int sum=0;
  for(int i = 1 ; i<=100 ; i++){
    sum= i+sum;
  	
}
  Serial.print(sum);
}
void loop()
{
  
}               
                   
