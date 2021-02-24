#define RED 11
#define GREEN 10
#define BLUE 9

int red = 0;
int green = 0;
int blue = 255;

void setup() {
  // put your setup code here, to run once:
  pinMode(RED,OUTPUT);
  pinMode(GREEN,OUTPUT);
  pinMode(BLUE,OUTPUT);

}

void loop() {
  
  blinkColorRGB(red,RED);
  blinkColorRGB(green,GREEN);
  blinkColorRGB(blue,BLUE);
          

}

void blinkColorRGB(int color , int LED){  
  for (color = 0 ; color <= 255 ; color ++){
      analogWrite(LED, color);
      delay(5);
    }
  for (color = 255 ; color >= 0 ; color --){
      analogWrite(LED, color);
      delay(5);
    }   
  }
