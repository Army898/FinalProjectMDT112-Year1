#include "DHT.h"
#define DHTPIN 7
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);

void setup() {
   Serial.begin(9600); 
   dht.begin();
}
void loop() {
   float h = dht.readHumidity();
   float t = dht.readTemperature();
   float f = dht.readTemperature(true);

   if (isnan(h) || isnan(t) || isnan(f)) {
     Serial.println("Failed to read from DHT sensor!");
      return;
   }

   Serial.print("Humidity: "); 
   Serial.print(h);
   Serial.println(" %\t");
   Serial.print("Temperature: "); 
   Serial.print(t);
   Serial.print(" *C ");
   Serial.print(f);
   Serial.println(" *F\t");
   delay(2000);

}