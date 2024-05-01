void setup() {
  pinMode(D0,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  for(int i=0; i<=9; i=i++)
{
  // put your main code here, to run repeatedly:
  digitalWrite(D0,LOW);
  Serial.println("i am ON");
  delay(100*i);
  digitalWrite(D0,HIGH);
  Serial.println("i am OFF");
  delay(100);
  
}

}
