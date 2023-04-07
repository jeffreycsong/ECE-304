/*
Got no idea what I am creating
*/

#include <avr/io.h>
#include <util/delay.h>
#include <string.h>     // defines strlen() function
#include <stdlib.h>     // defines itoa() function

#include "i2c.h"        // library from github
#include "SSD1306.h"    // library from github
#include "uart.h"       // uart library, uneeded

OLED_Init();

int main(void){

  while(1){
    // OLED line 0 is name
    OLED_GoToLine(0);
    OLED_DisplayString("Jeffrey Song");
  }
  
}