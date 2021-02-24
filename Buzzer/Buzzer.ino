#define pinBuzzer 8
void setup() {
  // put your setup code here, to run once:
  pinMode(pinBuzzer,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(pinBuzzer,HIGH);
  delay(50);
  digitalWrite(pinBuzzer,LOW);
  delay(50);
  digitalWrite(pinBuzzer,HIGH);
  delay(100);
  digitalWrite(pinBuzzer,LOW);

}
