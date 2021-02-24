#define pinLDR A0
#define pinBuzzer 8
#define led1 3
#define led2 4
#define led3 5
#define led4 6

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(pinBuzzer,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int valorLDR = analogRead(pinLDR);
  Serial.println(valorLDR);
  
  if (valorLDR > 800){
      digitalWrite(led1,HIGH);
      
      digitalWrite(pinBuzzer,HIGH);
      delay(200);
      digitalWrite(pinBuzzer,LOW);
      delay(200);
      digitalWrite(pinBuzzer,HIGH);
      
      if (valorLDR > 900){
        digitalWrite(led2,HIGH);
        
        digitalWrite(pinBuzzer,HIGH);
        delay(150);
        digitalWrite(pinBuzzer,LOW);
        delay(150);
        digitalWrite(pinBuzzer,HIGH);

        if (valorLDR > 1000){
          digitalWrite(led3,HIGH);
          
          digitalWrite(pinBuzzer,HIGH);
          delay(100);
          digitalWrite(pinBuzzer,LOW);
          delay(100);
          digitalWrite(pinBuzzer,LOW);          

          if (valorLDR > 1100){ 
            digitalWrite(led4,HIGH);
                
            digitalWrite(pinBuzzer,HIGH);
            delay(25);
            digitalWrite(pinBuzzer,LOW);
            delay(25);
            digitalWrite(pinBuzzer,LOW);
                        
            }else{digitalWrite(pinBuzzer,LOW);}
          } else{digitalWrite(pinBuzzer,LOW);}    
       }else{digitalWrite(pinBuzzer,LOW);}
    }
    else{
      digitalWrite(pinBuzzer,LOW);
      digitalWrite(led1,LOW);
      digitalWrite(led2,LOW);
      digitalWrite(led3,LOW);
      digitalWrite(led4,LOW);
       
      }
}
