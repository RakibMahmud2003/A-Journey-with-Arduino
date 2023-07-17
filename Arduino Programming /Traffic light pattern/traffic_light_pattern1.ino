
int red = 11, yellow = 7, green = 3;

void setup(){
 
  pinMode(red,OUTPUT);
  pinMode(yellow,OUTPUT);
  pinMode(green,OUTPUT);
  
 
  
}

void loop(){
 
	Traffic_Light_Pattern();
}

void Traffic_Light_Pattern(){
 
  digitalWrite(red,HIGH);
  delay(10000);
  digitalWrite(red,LOW);
  digitalWrite(yellow,HIGH);
  delay(5000);
  digitalWrite(yellow,LOW);
  digitalWrite(green,HIGH);
  delay(10000);
  digitalWrite(green,LOW);
  
}