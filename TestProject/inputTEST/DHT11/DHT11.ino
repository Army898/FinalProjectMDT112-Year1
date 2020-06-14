#include "DHT.h"                //ดึงข้อมูลจาก library
#define DHTPIN 7                //เสียบDHT11 ที่pin 7
#define DHTTYPE DHT11             //กำหนดรุ่งของDHTเป็นDHT11

DHT dht(DHTPIN, DHTTYPE);

void setup() {
   Serial.begin(9600); 
   dht.begin();                //เริ่มการทำงาน
}
void loop() {
   float h = dht.readHumidity();            //อ่านค่าความชื้นแล้วนำมาเก็บที่ตัวแปร h
   float t = dht.readTemperature();         //อ่านค่าอุณหภูมิแล้วนำมาเก็บที่ตัวแปร t
   float f = dht.readTemperature(true);         //อ่านค่าอุณหภูมิแล้วนำมาเก็บที่ตัวแปร f ว่าเป็นจริงหรือไม่

   if (isnan(h) || isnan(t) || isnan(f)) {                  //เช็ค ตัวแปรทั้งหมดว่าสามารถอ่านค่าได้หรือไม่
     Serial.println("Failed to read from DHT sensor!");         //พิมพ์บอก
      return;                                                   //ย้อนกลับไปเช็คว่าค่าตัวแปรอ่านได้ไหม
   }

   Serial.print("Humidity: ");              
   Serial.print(h);
   Serial.println(" %\t");
   Serial.print("Temperature: "); 
   Serial.print(t);
   Serial.print(" *C ");
   Serial.print(f);
   Serial.println(" *F\n");
   delay(2000);

}