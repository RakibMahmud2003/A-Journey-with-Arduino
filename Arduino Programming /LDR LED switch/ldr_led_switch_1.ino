

void setup(){
 
  Serial.begin(9600); 
  
  pinMode(9,OUTPUT);
  
}

void loop(){
 
  int resistance = analogRead(A0);
  Serial.println(resistance);
  
  if(resistance < 2){
 	digitalWrite(9,HIGH);
  
    
  }
  
  else{
    digitalWrite(9,LOW);
  }
  
}
  
  
  
