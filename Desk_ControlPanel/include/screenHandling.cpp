#include <Arduino.h>
#include <U8g2lib.h>
#include <globalVars.h>

U8G2_SH1106_128X64_NONAME_F_HW_I2C Display(U8G2_R0, U8X8_PIN_NONE, Display_CLK, Display_DT);// [full framebuffer, size = 1024 bytes];

void setup() {
 Display.begin();
   Display.firstPage();
  do {
    Display.setFont(u8g2_font_ncenB14_tr);
    Display.drawStr(0,24,"Centrum dowodzenia");
  } while ( Display.nextPage() );

    delay(1000);
    Display.clearDisplay();
    Row_Selected = 1;
    Screen_Selected = Screen_1;
}

void loop() {

    ScreenActual = Screen[Screen_Selected];
    delay(100);
    
    switch (Screen_Selected) 

        case Screen_1:
            //Screen_1
            strcpy(Screen[Screen_1].Row1.Text, "Strona 1 -Wiersz 1");
            strcpy(Row_1_Text,"Strona 1 -Wiersz 1");
            strcpy(Row_2_Text,"Strona 1 -Wiersz 2");
            strcpy(Row_3_Text,"Strona 1 -Wiersz 3");
            strcpy(Row_4_Text,"Strona 1 -Wiersz 2");
            // DECLARE HERE LABELS FOR ROWS ^^
            switch (Row_Selected){
                case Row_1:
                    //Row1 
                        Display.drawDisc(5,(Row_1_X-(Row_Height/2)),(Row_Height/2),U8G2_DRAW_ALL);
                        Display.drawStr(Row_Text_Y,Row_1_X,Row_1_Text);
                    //Row2
                        Display.drawCircle(5,(Row_2_X-(Row_Height/2)),(Row_Height/2),U8G2_DRAW_ALL);
                        Display.drawStr(Row_Text_Y,Row_2_X,Row_2_Text);
                    //Row3
                        Display.drawCircle(5,(Row_3_X-(Row_Height/2)),(Row_Height/2),U8G2_DRAW_ALL);
                        Display.drawStr(Row_Text_Y,Row_3_X,Row_3_Text);
                    //Row4
                        Display.drawCircle(5,(Row_4_X-(Row_Height/2)),(Row_Height/2),U8G2_DRAW_ALL);
                        Display.drawStr(Row_Text_Y,Row_4_X,Row_4_Text);
                    //Row5
                        Display.drawCircle(5,(Row_5_X-(Row_Height/2)),(Row_Height/2),U8G2_DRAW_ALL);
                        Display.drawStr(Row_Text_Y,Row_5_X,Row_5_Text);     
                break;
                case Row_2:
                    //Row1 
                        Display.drawCircle(5,(Row_1_X-(Row_Height/2)),(Row_Height/2),U8G2_DRAW_ALL);
                        Display.drawStr(Row_Text_Y,Row_1_X,Row_1_Text);
                    //Row2
                        Display.drawDisc(5,(Row_2_X-(Row_Height/2)),(Row_Height/2),U8G2_DRAW_ALL);
                        Display.drawStr(Row_Text_Y,Row_2_X,Row_2_Text);
                    //Row3
                        Display.drawCircle(5,(Row_3_X-(Row_Height/2)),(Row_Height/2),U8G2_DRAW_ALL);
                        Display.drawStr(Row_Text_Y,Row_3_X,Row_3_Text);
                    //Row4
                        Display.drawCircle(5,(Row_4_X-(Row_Height/2)),(Row_Height/2),U8G2_DRAW_ALL);
                        Display.drawStr(Row_Text_Y,Row_4_X,Row_4_Text);
                    //Row5
                        Display.drawCircle(5,(Row_5_X-(Row_Height/2)),(Row_Height/2),U8G2_DRAW_ALL);
                        Display.drawStr(Row_Text_Y,Row_5_X,Row_5_Text);  
                break;
                case Row_3:
                    //Row1 
                        Display.drawCircle(5,(Row_1_X-(Row_Height/2)),(Row_Height/2),U8G2_DRAW_ALL);
                        Display.drawStr(Row_Text_Y,Row_1_X,Row_1_Text);
                    //Row2
                        Display.drawCircle(5,(Row_2_X-(Row_Height/2)),(Row_Height/2),U8G2_DRAW_ALL);
                        Display.drawStr(Row_Text_Y,Row_2_X,Row_2_Text);
                    //Row3
                        Display.drawDisc(5,(Row_3_X-(Row_Height/2)),(Row_Height/2),U8G2_DRAW_ALL);
                        Display.drawStr(Row_Text_Y,Row_3_X,Row_3_Text);
                    //Row4
                        Display.drawCircle(5,(Row_4_X-(Row_Height/2)),(Row_Height/2),U8G2_DRAW_ALL);
                        Display.drawStr(Row_Text_Y,Row_4_X,Row_4_Text);
                    //Row5
                        Display.drawCircle(5,(Row_5_X-(Row_Height/2)),(Row_Height/2),U8G2_DRAW_ALL);
                        Display.drawStr(Row_Text_Y,Row_5_X,Row_5_Text); 
                break;
                case Row_4:
                    //Row1 
                        Display.drawCircle(5,(Row_1_X-(Row_Height/2)),(Row_Height/2),U8G2_DRAW_ALL);
                        Display.drawStr(Row_Text_Y,Row_1_X,Row_1_Text);
                    //Row2
                        Display.drawCircle(5,(Row_2_X-(Row_Height/2)),(Row_Height/2),U8G2_DRAW_ALL);
                        Display.drawStr(Row_Text_Y,Row_2_X,Row_2_Text);
                    //Row3
                        Display.drawCircle(5,(Row_3_X-(Row_Height/2)),(Row_Height/2),U8G2_DRAW_ALL);
                        Display.drawStr(Row_Text_Y,Row_3_X,Row_3_Text);
                    //Row4
                        Display.drawDisc(5,(Row_4_X-(Row_Height/2)),(Row_Height/2),U8G2_DRAW_ALL);
                        Display.drawStr(Row_Text_Y,Row_4_X,Row_4_Text);
                    //Row5
                        Display.drawCircle(5,(Row_5_X-(Row_Height/2)),(Row_Height/2),U8G2_DRAW_ALL);
                        Display.drawStr(Row_Text_Y,Row_5_X,Row_5_Text); 
                break;               
                case Row_5:
                    //Row1 
                        Display.drawCircle(5,(Row_1_X-(Row_Height/2)),(Row_Height/2),U8G2_DRAW_ALL);
                        Display.drawStr(Row_Text_Y,Row_1_X,Row_1_Text);
                    //Row2
                        Display.drawCircle(5,(Row_2_X-(Row_Height/2)),(Row_Height/2),U8G2_DRAW_ALL);
                        Display.drawStr(Row_Text_Y,Row_2_X,Row_2_Text);
                    //Row3
                        Display.drawCircle(5,(Row_3_X-(Row_Height/2)),(Row_Height/2),U8G2_DRAW_ALL);
                        Display.drawStr(Row_Text_Y,Row_3_X,Row_3_Text);
                    //Row4
                        Display.drawCircle(5,(Row_4_X-(Row_Height/2)),(Row_Height/2),U8G2_DRAW_ALL);
                        Display.drawStr(Row_Text_Y,Row_4_X,Row_4_Text);
                    //Row5
                        Display.drawDisc(5,(Row_5_X-(Row_Height/2)),(Row_Height/2),U8G2_DRAW_ALL);
                        Display.drawStr(Row_Text_Y,Row_5_X,Row_5_Text); 
                break;
            }
        break;
        case Screen_2:
            //Screen 2
            strcpy(Row_1_Text,"Strona 2 -Wiersz 1");
            strcpy(Row_2_Text,"Strona 2 -Wiersz 2");
            strcpy(Row_3_Text,"Strona 2 -Wiersz 3");
            strcpy(Row_4_Text,"Strona 2 -Wiersz 2");
            switch (Row_Selected){


                }
            break;
    }

}