
void setup()
{
	Serial.begin(9600);
  	
}
void loop()
{
  if(Serial.available()>0){
    
    char ch = Serial.read();
   
  
  if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
    
    Serial.print(ch);
    Serial.print(" is a vowel");
}
  else{
 	Serial.print(ch);
    Serial.println(" is a consonant");

  }
    
  }
}               
                   
