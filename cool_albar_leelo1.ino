int cm=0;
void setup(){
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  Serial.begin(9600);
}
void loop(){
cm=read(7,6);
   Serial.print(cm);
  Serial.println("cm");
  
  if(cm>250){
    digitalWrite(2,HIGH);
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
  }
  if(cm>120 && cm<=250){
    digitalWrite(2,LOW);
    digitalWrite(3,HIGH);
    digitalWrite(4,LOW);
  }
  if(cm<120){
    digitalWrite(2,LOW);
    digitalWrite(3,LOW);
    digitalWrite(4,HIGH);
    
    
  }
 
}
int read(int t, int e){
  pinMode(t,OUTPUT);
  digitalWrite(t,LOW);
  delayMicroseconds(2);
  digitalWrite(t,HIGH);
  delayMicroseconds(10);
  digitalWrite(t,LOW);
  
  pinMode(e,INPUT);
  return (pulseIn(e,HIGH)*0.0173);
}
