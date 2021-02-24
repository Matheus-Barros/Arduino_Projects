int botao         = 8;
int led           = 12;
int estado_botao  = 0;
int flag_botao    = 0;
int estado_led    = 1;

void setup() { 
  
Serial.begin(9600);                                         // Informa ao micro que vamos usar comunicação serial

pinMode(botao, INPUT);                                      // Informamos que botao(8) é entrada
pinMode(led  , OUTPUT);                                     // Informamos que led (5) é saida


  }// fim setup

void loop() {
  estado_botao = digitalRead(botao);                       // ATRIBUI O PINO DE ENTRADA BOTAO A VARIAVEL estado_botao
  Serial.println(estado_botao);
  if(( estado_botao == 1 )&&( flag_botao == 0 ))                                  // TESTA A VARIALVEL SE É 1                    
    {
      flag_botao = 1;
      if( estado_led == 1)
        {
         estado_led=0; 
         digitalWrite( led, HIGH );
         Serial.println("LIGADO");
        }
        
      else if( estado_led == 0)
        {
         estado_led=1;
         digitalWrite( led, LOW );
         Serial.println("DESLIGADO");   
        }
    delay(50);
    }// fim 

  if( estado_botao == 0 )
    {
     flag_botao=0;
     delay(50);  
    }


}// fim do loop
