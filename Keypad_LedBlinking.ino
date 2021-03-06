#include <Keypad.h>
#include <LED.h>

LED led = LED(13); //led pin
const byte ROWS = 4; //four rows
const byte COLS = 3; //three columns
char keys[ROWS][COLS] = {
  {'1','2','3'},
  {'4','5','6'},
  {'7','8','9'},
  {'*','0','#'}
};
byte rowPins[ROWS] = {5, 4, 3, 2}; //connect to the row pinouts of the keypad
byte colPins[COLS] = {8, 7, 6}; //connect to the column pinouts of the keypad

Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );

void setup(){}
  
void loop(){
  char key = keypad.getKey();
  if (key == '1'){
    led.blink(500);            
  }
  if (key == '2'){
    led.blink(500); led.blink(500); 
  }
  if (key == '3'){
    led.blink(500); led.blink(500); led.blink(500); 
  }
  if (key == '4'){
    led.blink(500); led.blink(500); led.blink(500); 
    led.blink(500);
  }
  if (key == '5'){
    led.blink(500); led.blink(500); led.blink(500); 
    led.blink(500); led.blink(500);
  }
  if (key == '6'){
    led.blink(500); led.blink(500); led.blink(500);
    led.blink(500); led.blink(500); led.blink(500);
  }
  if (key == '7'){
    led.blink(500); led.blink(500); led.blink(500); 
    led.blink(500); led.blink(500); led.blink(500);
    led.blink(500);    
  }
  if (key == '8'){
    led.blink(500); led.blink(500); led.blink(500);
    led.blink(500); led.blink(500); led.blink(500);
    led.blink(500); led.blink(500);   
  }
  if (key == '9'){
    led.blink(500); led.blink(500); led.blink(500); 
    led.blink(500); led.blink(500); led.blink(500);
    led.blink(500); led.blink(500); led.blink(500);
  }
  if (key == '*'){
    led.blink(200); led.blink(200); led.blink(200); 
  }
  if (key == '0'){
    led.blink(2000); 
  }
  if (key == '#'){
    led.blink(200); led.blink(200); led.blink(200); 
  } 
}
