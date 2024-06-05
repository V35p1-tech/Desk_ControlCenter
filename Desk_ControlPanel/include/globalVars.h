// globalVars.h
#ifndef GLOBALVARS_H
#define GLOBALVARS_H
#include <Arduino.h>

//Screen
    extern int Display_reset;
    extern int Display_CLK;
    extern int Display_DT; 
//Encoder 
    extern int EncoderChA; //pin 3
    extern int EncoderChB; //pin 4
    extern int EncoderBtn; //pin 5
//Relay
    extern bool Relay[9];      
    // extern bool Relay_1; //pin 6   
    // extern bool Relay_2; //pin 7   
    // extern bool Relay_3; //pin 8 
    // extern bool Relay_4; //pin 9 
    // extern bool Relay_5; //pin 10 
    // extern bool Relay_6; //pin 11 
    // extern bool Relay_7; //pin 12 
    // extern bool Relay_8; //pin 13   
//Screens
    extern int Screen_Selected;
    extern int Screen_1;
    extern int Screen_2;
    extern int Screen_3;

//Rows Y
    extern int Row_Selected;
    extern int Row_Height;

    extern const int Row_1;
    extern const int Row_2;
    extern const int Row_3;
    extern const int Row_4;
    extern const int Row_5;
    extern int Row_1_X;
    extern int Row_2_X;
    extern int Row_3_X;
    extern int Row_4_X;
    extern int Row_5_X;
    extern int Row_Text_Y;
    extern char Row_1_Text[30];
    extern char Row_2_Text[30];
    extern char Row_3_Text[30];
    extern char Row_4_Text[30];
    extern char Row_5_Text[30];


    struct RowData {
        char Text[100];
        bool Activated;
    };
    struct screenData 
    {
        RowData Row[5];
    };
    extern screenData Screen[5];
    extern screenData ScreenActual;

  #endif // GLOBALVARS_H

