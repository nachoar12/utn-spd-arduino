// CODIGO ARDUINO PARA TINKERCAD

// c++ code

#define RED_LED_1 11
#define RED_LED_2 8
#define RED_LED_3 6
#define RED_LED_4 3
#define RED_LED_5 1

#define DELAY 250
#define TAM 5

int leds[TAM] = {11,8,6,3,1};


void setup()
{
  for (int i = 0; i < TAM; i++){
    pinMode(leds[i], OUTPUT);
  
  }  
}

void loop()
{
  
  for (int i = 1; i < TAM; i++){
  	digitalWrite(leds[i], HIGH);
    delay(DELAY);
    digitalWrite(leds[i], LOW);
    delay(DELAY);
  }

   for (int i = TAM - 2; i >= 0; i--){
  	digitalWrite(leds[i], HIGH);
    delay(DELAY);
    digitalWrite(leds[i], LOW);
    delay(DELAY);
  }
}