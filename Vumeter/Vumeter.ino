
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);

}
void loop() {
  
  //LED 1
  int valor = analogRead(A0);
  Serial.println(valor);
  
  if (valor >= 525){
 
    digitalWrite(3,HIGH);
    
    }else{
      digitalWrite(3,LOW);
    }
    
  //LED 2
  if (valor >= 527){
 
    digitalWrite(4,HIGH);
    
    }else{
      digitalWrite(4,LOW);
    }

    
  //LED 3
  if (valor >= 529){
 
    digitalWrite(5,HIGH);
    
    }else{
      digitalWrite(5,LOW);
    }
    
  //LED 4
  if (valor >= 531){
 
    digitalWrite(6,HIGH);
    
    }else{
      digitalWrite(6,LOW);
    }          

  //LED 5
  if (valor >= 533){
 
    digitalWrite(7,HIGH);
    
    }else{
      digitalWrite(7,LOW);
    } 

  //LED 6
  if (valor >= 535){
 
    digitalWrite(8,HIGH);
    
    }else{
      digitalWrite(8,LOW);
    } 
}
