
void setup()
{
	Serial.begin(9600);
  
  	int score = 66;
  
  if(score>=80)
    Serial.println("A+");
  else if (score >=70 && score<=79)
    Serial.println("A");
  else if(score >= 60 && score<=69)
    Serial.println("A-");
  else if(score>= 50 && score<=59)
    Serial.println("B");
  else if(score>= 40 && score<=49)
    Serial.println("C");
  else if(score>= 33 && score<=39)
    Serial.println("D");
  else if(score<33)
    Serial.println("F");
  
  	
}
void loop()
{
  
}               
                   
