int pir=5;            //pir sensor output act as the input for the conroller
int led=12;
int red=6;
int green=7;
void setup()
{
  pinMode(5,INPUT);      //pir sensor is inout for the arduino
  pinMode(12,OUTPUT);    //rest of the components will acts as an output
  pinMode(7,OUTPUT);
  pinMode(6,OUTPUT);      
}
void loop()
{
  if (digitalRead(pir)==HIGH)   //if the pir sensor detect the motion then pir will high 
  { 
    digitalWrite(12,LOW);
    delayMicroseconds(2);
    digitalWrite(12,HIGH);   //buzzer will produce the sound when motion occur
    digitalWrite(6,HIGH);    //if motion is there then the red led will glow
     digitalWrite(7,LOW);    //greenn led will not glow when there is motion 
  }
  else
  {  
    digitalWrite(12,LOW);   //if there is no motion then the buzzer will not create the sound
    digitalWrite(7,HIGH);   //green led will glow if there is no motion
    digitalWrite(6,LOW);    //red led will not glow when noo motion
  }
}