#include<Servo.h>

Servo myServo;
int echo = 10, trig = 11;

void setup()
{
  Serial.begin(9600);
  myServo.attach(3);
  pinMode(echo,INPUT);
  pinMode(trig,OUTPUT);
}

void loop()
{
  if(distance_Function(echo,trig)<30){
    myServo.write(90);
    delay(2000);
  }
  if(distance_Function(echo,trig)>30 && distance_Function(echo,trig)<200){
    myServo.write(0);
  }
}

int distance_Function(int echo, int trig){

  digitalWrite(trig,LOW);
  delayMicroseconds(2);
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);

  int duration = pulseIn(echo,HIGH);

  int distance = (0.034*duration)/2;
  return distance;
}
