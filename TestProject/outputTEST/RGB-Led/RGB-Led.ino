int red_light_pin= 3;
int green_light_pin = 5;
int blue_light_pin = 6;
void setup()    
{
  pinMode(red_light_pin, OUTPUT);
  pinMode(green_light_pin, OUTPUT);
  pinMode(blue_light_pin, OUTPUT);
}
void loop() 
{
  RGB_color(255, 0, 0); // Red
  delay(1000);
  RGB_color(0, 255, 0); // Green
  delay(1000);
  RGB_color(0, 0, 255); // Blue
  delay(1000);
}
void RGB_color(int red_light_value, int green_light_value, int blue_light_value) 
{
  analogWrite(red_light_pin, red_light_value);              //เปิดไฟที่ pin 3 ด้วยค่าความสว่าง 255,0,0 
  analogWrite(green_light_pin, green_light_value);          //เปิดไฟที่ pin 5 ด้วยค่าความสว่าง 0,255,0 
  analogWrite(blue_light_pin, blue_light_value);            //เปิดไฟที่ pin 6 ด้วยค่าความสว่าง 0,0,255
}