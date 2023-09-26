 char reading;
 void setup() {
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
   pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
  
  
 Serial.begin(9600);
}

void loop() {
if (Serial.available()>0){
  reading=Serial.read();
  if( reading=='f'){digitalWrite(7,HIGH);
  analogWrite(6,200);
  digitalWrite(12,HIGH);
  analogWrite(11,200);}
  
  else if(reading =='d'){
    digitalWrite(8,HIGH);
    analogWrite(6,200);
    digitalWrite(13,HIGH);
    digitalWrite(7,LOW);
    digitalWrite(12,LOW);
    analogWrite(11,200);}
    else if(reading=='r'){digitalWrite(7,HIGH);
    digitalWrite(8,LOW);
    analogWrite(6,200);
    digitalWrite(12,LOW);
    digitalWrite(13,LOW);}
    else if(reading=='l'){digitalWrite(12,HIGH);
    analogWrite(11,200);
    digitalWrite(7,LOW);
    digitalWrite(8,LOW);
    digitalWrite(13,LOW);}
   else if( reading=='s'){digitalWrite(7,LOW);
digitalWrite(12,LOW);
digitalWrite(8,LOW);
digitalWrite(13,LOW);}
  }
  
}