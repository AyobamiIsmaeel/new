int sensor=A0; 
int fan=13;
int led=12;


void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(fan,OUTPUT);
pinMode(led,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int value=analogRead(sensor);
Serial.println("Tenperature ls");
Serial.println(value);
if(value>=25)
{
  digitalWrite(fan,LOW);
  digitalWrite(led,HIGH);
}
else{
  digitalWrite(fan,HIGH);
   digitalWrite(led,LOW);
}
delay(500);
}
