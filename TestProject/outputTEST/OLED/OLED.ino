#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <SPI.h>
#include <Wire.h>

Adafruit_SSD1306 oled = Adafruit_SSD1306(128, 32, &Wire);

void setup() 
{
  pinMode(2, INPUT_PULLUP);
  oled.begin(0x3C); // Address 0x3C for 128x32
}

int i = 0;

void loop() {

  oled.clearDisplay();
  oled.setCursor(0, 0);

  oled.setTextColor(SSD1306_WHITE);
  oled.setTextSize(1);
  oled.println("Weather clear");

  oled.setTextSize(1);
  oled.println("May be rain is coming");

  oled.setTextSize(1);
  oled.println("There is raining");
  
  oled.display();
  delay(10);
}