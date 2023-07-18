
int sensor = A0;
int red = 8 , blue = 7, green=5;

void setup(){
 
  Serial.begin(9600); 
  
  pinMode(red,OUTPUT);
  pinMode(blue,OUTPUT);
  pinMode(green,OUTPUT);
  
}

void loop(){
 
  int Sensor = analogRead(sensor);
  Serial.println(Sensor);
  
  if(Sensor>=0 && Sensor<=80){
   Green(); 
  }
  
  else if(Sensor>80 && Sensor<=140){
    Yellow();
}
  else if(Sensor >140){
   Red(); 
  }
}


void Red(){
 digitalWrite(red,HIGH);
 digitalWrite(green,LOW);
 digitalWrite(blue,LOW); 
}

void Yellow(){
 digitalWrite(red,HIGH);
 digitalWrite(green,HIGH);
 digitalWrite(blue,LOW);
}

void Green(){
 digitalWrite(red,LOW);
 digitalWrite(green,HIGH);
 digitalWrite(blue,LOW); 
}
  
  
  
