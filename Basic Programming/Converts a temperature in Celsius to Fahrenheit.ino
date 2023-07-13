void setup()
{
	Serial.begin(9600);
  	
  	float celsius = 30;
  
  	float fahrenheit = (celsius * 9/5) +32;
  
  	Serial.print("Temperature is Fahrenheit is: "); Serial.println(fahrenheit);
}
void loop()
{
  
}
                   
