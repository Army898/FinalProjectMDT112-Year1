#include "DHT.h"                
#define DHTPIN 7                
#define DHTTYPE DHT11    

DHT dht(DHTPIN, DHTTYPE);
/////////////////////////////

#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <SPI.h>
#include <Wire.h>

Adafruit_SSD1306 oled = Adafruit_SSD1306(128, 32, &Wire);

/////////////////////////////

#include <Servo.h>
Servo myservo; 

/////////////////////////////

int pos = 0;
int SoundTime = 100;
int red_light_pin= 3;
int green_light_pin = 5;
int blue_light_pin = 6;

void setup()
{
    Serial.begin(9600); 
    pinMode(red_light_pin, OUTPUT);
    pinMode(green_light_pin, OUTPUT);
    pinMode(blue_light_pin, OUTPUT);
    dht.begin();
    oled.begin(0x3C);
}

void loop()
{
    long TemperatureValue = dht.readTemperature();
    long HumidityValue = dht.readHumidity();
    long RainDropWaterValue = analogRead(A0);
    
    if (TemperatureValue >= 0 && HumidityValue >= 0 && RainDropWaterValue >= 0)
    {
        if(HumidityValue >= 0 && HumidityValue < 49)        //ระดับ Green
        {
            if(RainDropWaterValue <= 800) //ถ้ามีหยดน้ำ
            {
                tone(8,400,SoundTime++);
                oled.clearDisplay();      
                oled.setCursor(0, 0);        

                oled.setTextColor(SSD1306_WHITE);         
                oled.setTextSize(1);                      
                oled.println("Weather clear");
                oled.print("Humidity: ");              
                oled.print(HumidityValue);
                oled.println(" %\t");
                oled.println("Temperature: " + String(TemperatureValue) + " *C ");
                oled.display();
                RGB_color(0, 125, 0);
            }
            if(RainDropWaterValue > 800)  //ถ้าไม่มีหยดน้ำ
            {
                oled.clearDisplay();      
                oled.setCursor(0, 0);        

                oled.setTextColor(SSD1306_WHITE);         
                oled.setTextSize(1);                      
                oled.println("Weather clear");
                oled.print("Humidity: ");              
                oled.print(HumidityValue);
                oled.println(" %\t");
                oled.println("Temperature: " + String(TemperatureValue) + " *C ");
                oled.display();
                RGB_color(0, 125, 0);
            }
        }
        if(HumidityValue >= 50 && HumidityValue < 89)            //ระดับ Blue
        {
            if(RainDropWaterValue <= 800) //ถ้ามีหยดน้ำ
            {
                tone(8,400,SoundTime++);
                oled.clearDisplay();      
                oled.setCursor(0, 0);        

                oled.setTextColor(SSD1306_WHITE);         
                oled.setTextSize(1);                      
                oled.println("May be rain is coming");
                oled.print("Humidity: ");              
                oled.print(HumidityValue);
                oled.println(" %\t");
                oled.println("Temperature: " + String(TemperatureValue) + " *C ");
                oled.display();
                RGB_color(0, 0, 125);  //blue
            }
            if(RainDropWaterValue > 800)  //ถ้าไม่มีหยดน้ำ
            {
                oled.clearDisplay();      
                oled.setCursor(0, 0);        

                oled.setTextColor(SSD1306_WHITE);         
                oled.setTextSize(1);                      
                oled.println("May be rain is coming");
                oled.print("Humidity: ");              
                oled.print(HumidityValue);
                oled.println(" %\t");
                oled.println("Temperature: " + String(TemperatureValue) + " *C ");
                oled.display();
                RGB_color(0, 0, 125);  //Blue
            }
        }
        if(HumidityValue >= 90 && HumidityValue == 100)            //ระดับ Red
        {
            if(RainDropWaterValue <= 800) //ถ้ามีหยดน้ำ
            {
                tone(8,400,SoundTime++);
                oled.clearDisplay();      
                oled.setCursor(0, 0);        

                oled.setTextColor(SSD1306_WHITE);         
                oled.setTextSize(1);                      
                oled.println("There is raining");
                oled.print("Humidity: ");              
                oled.print(HumidityValue);
                oled.println(" %\t");
                oled.println("Temperature: " + String(TemperatureValue) + " *C ");
                oled.display();
                RGB_color(125, 0, 0);  //Red
            }
            if(RainDropWaterValue > 800)  //ถ้าไม่มีหยดน้ำ
            {
                oled.clearDisplay();      
                oled.setCursor(0, 0);        

                oled.setTextColor(SSD1306_WHITE);         
                oled.setTextSize(1);                      
                oled.println("There is raining");
                oled.print("Humidity: ");              
                oled.print(HumidityValue);
                oled.println(" %\t");
                oled.println("Temperature: " + String(TemperatureValue) + " *C ");
                oled.display();
                RGB_color(125, 0, 0);  //Red
            }
        }
    }   
}
void RGB_color(int red_light_value, int green_light_value, int blue_light_value) 
{
  analogWrite(red_light_pin, red_light_value);              
  analogWrite(green_light_pin, green_light_value);           
  analogWrite(blue_light_pin, blue_light_value);        
}