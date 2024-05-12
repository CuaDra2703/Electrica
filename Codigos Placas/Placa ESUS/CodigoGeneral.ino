// C++ code
// 
// pin 1 Vin [Intocable]
// pin 2 
// pin 3 
// pin 4 
// pin 5 
// pin 6 
// pin 7 
// pin 8 
// pin 9 
// pin 10 
// pin 11 
// pin 12 
// pin 13 
// pin 14 
// pin 15 
// pin 16 
// pin 17 
// pin 18 
// pin 19 
// pin 20 BOTON DE ENCENDIDO [IN][ANALOG][0-3.3v][VIXO]
// pin 21 Activar RFE bamocar [OUT][PWM][0-100][VIXO]
// pin 22 
// pin 23 
// pin 24 
// pin 25 
// pin 26 
// pin 27 
// pin 28 
// pin 29 
// pin 30 
// pin 31 
// pin 32 
// pin 33 
// pin 34 
// pin 35 
// pin 36 
// pin 37 
// pin 38 
// pin 39 
// pim 40 
// pin 41 
// pin 42 
// pin 43 
// pin 44 
// pin 45 
// pin 46 
// pin 47 
// pin 48 

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}