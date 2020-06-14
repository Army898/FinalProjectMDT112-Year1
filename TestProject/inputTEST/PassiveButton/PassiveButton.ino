void setup()
{                      
    pinMode(2, INPUT_PULLUP);
}
int soundTest = 1;
void loop()
{   
    if (soundTest = 1)
    {
        tone(8,200,300);
        if (digitalRead(2)==0)
        { 
            tone(8,0,500);
            delay(3000);
        }   
    }         
}
