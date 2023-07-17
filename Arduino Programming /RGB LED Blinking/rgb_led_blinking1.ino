
int red = 13, green = 11, blue = 12;
void setup(){
 
  pinMode(red,OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(blue,OUTPUT);
  
}

void loop(){
 
  RGB_Blinking();
}

void RGB_Blinking(){
 
 digitalWrite(red,HIGH);
 delay(1000);
 digitalWrite(red,LOW);
 
  
  
 digitalWrite(green,HIGH);
 delay(1000);
 digitalWrite(green,LOW);

  
 digitalWrite(blue,HIGH);
 delay(1000);
 digitalWrite(blue,LOW);
 
  
}