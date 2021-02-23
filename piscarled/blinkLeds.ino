void setup() {
  // put your setup code here, to run once:
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  

}
int number = 3;
void loop() {
  // put your main code here, to run repeatedly:
  
  
  digitalWrite(number,HIGH);
  delay(100);
  digitalWrite(number,LOW);

  number = number + 1;
  if (number == 9){
    number = 3;
  }
  

}
