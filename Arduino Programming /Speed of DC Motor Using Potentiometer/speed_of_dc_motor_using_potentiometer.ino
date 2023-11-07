
int val,speed;

void setup()
{
  pinMode(A0, INPUT);
  pinMode(5,OUTPUT);
  pinMode(11, OUTPUT);
  
}

void loop()
{
 val =  analogRead(A0);
 
 speed = map(val, 0 , 1023, 0, 255);
  
  analogWrite(5, speed);
  
}
