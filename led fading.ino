 
int brightness = 0; 
int fadeAmount = 5; 
void setup() {
  
   pinMode(LED_BUILTIN, OUTPUT);
}
void loop() 
{
   analogWrite(led, brightness);
   brightness = brightness + fadeAmount;
   if (brightness == 0 || brightness == 255) {
      fadeAmount = -fadeAmount ;
   }
   delay(100);
}