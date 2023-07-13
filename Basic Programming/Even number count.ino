void setup()
{
 Serial.begin(9600);
  
  int count = 0;
  
  for(int i=1;i<=100;i++){
    if(i%2 ==0){
     count++; 
    }
  }
	Serial.print("Even number count = ");
  	Serial.println(count);
  
}


void loop()
{
 
}
