#include "Joystick.h"

#define SHIFTER_1   4
#define SHIFTER_2   5
#define SHIFTER_3   2
#define SHIFTER_4   6
#define SHIFTER_5   3
#define SHIFTER_6   7


Joystick_ Joystick;



void setup(void)
{
    Joystick.begin();

    pinMode(SHIFTER_1, INPUT_PULLUP);
    pinMode(SHIFTER_2, INPUT_PULLUP);
    pinMode(SHIFTER_3, INPUT_PULLUP);
    pinMode(SHIFTER_4, INPUT_PULLUP);
    pinMode(SHIFTER_5, INPUT_PULLUP);
    pinMode(SHIFTER_6, INPUT_PULLUP);
    
}

void loop(void)
{

    
    if(!digitalRead(SHIFTER_1)){
      Joystick.setButton(0, 1);
      Serial.println('1');
      delay(50);
      }
    else if(!digitalRead(SHIFTER_2)){
      Joystick.setButton(1, 1);
      Serial.println('2');
      delay(50);
      }
    else if(!digitalRead(SHIFTER_3)){
      Joystick.setButton(2, 1);
      Serial.println('3');
      delay(50);
      }
      else if(!digitalRead(SHIFTER_4)){
      Joystick.setButton(3, 1);
      Serial.println('4');
      delay(50);
      }
    else if(!digitalRead(SHIFTER_5)){
      Joystick.setButton(4, 1);
      Serial.println('5');
      delay(50);
      }else if(!digitalRead(SHIFTER_6)){
      Joystick.setButton(5, 1);
      Serial.println('6');
      delay(50);
      }
    else{
      Joystick.setButton(0, 0);
      Joystick.setButton(1, 0);
      Joystick.setButton(2, 0);
      Joystick.setButton(3, 0);
      Joystick.setButton(4, 0);
      Joystick.setButton(5, 0);

      //Reverse
      Joystick.setButton(6, 0);
      delay(50);
    }

     
}
