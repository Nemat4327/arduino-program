void setup()
{   Serial.begin(9600);
    pinMode(3,INPUT);
    pinMode(13,OUTPUT);
}

void loop()
{  
   if(digitalRead(3)==HIGH)
   {
     Serial.println("led on");
    digitalWrite(13,HIGH);
   }
   else
   {
    Serial.println("led off");
    digitalWrite(13,LOW);
   }
}