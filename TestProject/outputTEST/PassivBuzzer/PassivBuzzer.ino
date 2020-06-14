int sensorValue = 800;
void setup()
{

}
int SoundTime = 100;
void loop()
{
if (sensorValue <= 800)
    {
        tone(8,400,SoundTime++);
    } 
}