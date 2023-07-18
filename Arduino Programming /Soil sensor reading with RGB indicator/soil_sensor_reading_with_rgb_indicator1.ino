
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
  
  if(Sensor>=0 && Sensor<=300){
   Red(); 
  }
  
  else if(Sensor>300 && Sensor<=600){
    Yellow();
}
  else if(Sensor >600){
   Green(); 
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
  
  
  
