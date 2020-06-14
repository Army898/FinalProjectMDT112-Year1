void setup()
{                      
    pinMode(2, INPUT_PULLUP);
}

void loop()
{
    if (digitalRead(2)==0)
    {
        tone(8,200,100);                        
        delay(250);
        tone(8,400,100);  
    }                    
}
