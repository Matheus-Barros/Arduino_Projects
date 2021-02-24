#include <DHT.h>
#define DHTPIN 2
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  dht.begin();
}
void loop() {
  delay(2000);
  float h = dht.readHumidity();  
  float t = dht.readTemperature();
  float tf = dht.readTemperature();
  tf = (tf * 1.8) + 32;
  
  if (isnan(h) || isnan(t)) {
    return;
  }
  
  Serial.print("Humidity: ");
  Serial.print(h);//Imprime na serial o valor da umidade
  Serial.println("%");
  Serial.print("Temperature: ");
  Serial.print(t);//Imprime na serial o valor da temperatura
  Serial.print("°C | ");
  Serial.print(tf);
  Serial.println("°F");
  
}
