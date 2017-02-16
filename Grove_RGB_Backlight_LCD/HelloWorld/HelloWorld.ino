// ibJony
// Reference: Groove starter kit

#include <Wire.h>
#include "rgb_lcd.h"

rgb_lcd lcd;

const int colorR = 0;
const int colorG = 0;
const int colorB = 255;

void setup() 
{
    // LCD's number of columns and rows:
    lcd.begin(16, 2);
    
    lcd.setRGB(colorR, colorG, colorB);
    
    // Print a message.
    lcd.print("hello, world!");

    delay(1000);
}

void loop() 
{
    lcd.setCursor(0, 1);
    lcd.print(millis()/1000);

    delay(100);
}

