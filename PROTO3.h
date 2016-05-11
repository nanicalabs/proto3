
/*******************************************************************
 * 
 * Written by Mithi Sevilla | MAY 12, 2016 | http://mithi.xyz
 * 
 *******************************************************************/

#include "Arduino.h"
#include "Adafruit_NeoPixel.h"

/********************************************
 * PIN CONSTANTS
 ********************************************/

#define PIN_PIXELS 5

/********************************************
 * PIXELS CONSTANTS
 ********************************************/

#define PIXEL_NUM 4
 
#define LEFT_MOST_PIX 0
#define LEFT_CENTER_PIX 1
#define RIGHT_CENTER_PIX 2
#define RIGHT_MOST_PIX 3

const byte RED = 0;         //200 
const byte ORANGE = 1;      //210 
const byte YELLOW = 2;      //220 
const byte GREEN = 3;       //020
const byte BLUE = 4;        //002
const byte PURPLE = 5;      //202 
const byte PINK = 6;        //201 
const byte AQUA = 7;        //021
const byte WHITE = 8;       //222 
const byte LIME = 9;        //120
const byte INDIGO = 10;     //102 
const byte TEAL = 11;       //012
const byte TURQUOISE = 12;  //022
const byte OFF_PIX = 13;    //000

const byte MAX_COLOR_NUM = 13;

/********************************************
 * PIXELS
 ********************************************/

class Pixels{
  public:
    void enable();
    void set(byte p, byte r, byte g, byte b);
    void left_most(byte r, byte g, byte b);
    void left_center(byte r, byte g, byte b);
    void right_center(byte r, byte g, byte b);
    void right_most(byte r, byte g, byte b);
    void color(byte pixel_name, byte color_name);
};

