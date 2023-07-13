
void setup()
{
	Serial.begin(9600);
  	
  	int year = 2024;
  
  if(year %4 ==0 && year %100 !=0 || year%400 == 0){
   Serial.print(year);
   Serial.print(" is leap year!");
  }
  
  else{
   Serial.print(year);
   Serial.print(" is not leap year!");
  }
}
void loop()
{
  
}
                   
                   
