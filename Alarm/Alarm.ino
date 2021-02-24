#define laser 9
#define pinLDR A0
#define pinBuzzer 8

void setup() {
  // put your setup code here, to run once:
  pinMode(laser,OUTPUT);
  pinMode(pinBuzzer,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(laser,HIGH);

  int valorLDR = analogRead(pinLDR);
  Serial.println(valorLDR);

  if (valorLDR <= 850){

      digitalWrite(pinBuzzer,HIGH);
    
    }else{
        
      digitalWrite(pinBuzzer,LOW);  
      }

  
  
}
