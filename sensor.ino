int sensor =0;
void setup()
{
  pinMode(5,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(A0,INPUT);
  Serial.begin(9600);
}

void loop()
{
  sensor=analogRead(A0);
  Serial.println(sensor);
  if(sensor>=100){
  digitalWrite(5, HIGH);
  }
  else{
  digitalWrite(5, LOW);
  }
  if(sensor>=150){
    digitalWrite(7, HIGH);
  }
  else{
  digitalWrite(7, LOW);
  }
  delay(250);
}  
