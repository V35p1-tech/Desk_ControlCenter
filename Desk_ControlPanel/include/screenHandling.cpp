#include <Arduino.h>
#include <U8g2lib.h>
#include <globalVars.h>

U8G2_SH1106_128X64_NONAME_F_HW_I2C Display(U8G2_R0, U8X8_PIN_NONE, Display_CLK, Display_DT);// [full framebuffer, size = 1024 bytes];

void setup() {
 Display.begin();
   Display.firstPage();
  do {
    Display.setFont(u8g2_font_ncenB14_tr);
    Display.drawStr(5,24,"Centrum dowodzenia");
  } while ( Display.nextPage() );

    delay(1000);
    Display.clearDisplay();
    Row_Selected = 1;
    Screen_Selected = Screen_1;

    strcpy(Screen[Screen_1].Row[1].Text, "Strona 1 -Wiersz 1");
    strcpy(Screen[Screen_1].Row[2].Text, "Strona 1 -Wiersz 2");
    strcpy(Screen[Screen_1].Row[3].Text, "Strona 1 -Wiersz 3");
    strcpy(Screen[Screen_1].Row[4].Text, "Strona 1 -Wiersz 4");

    strcpy(Screen[Screen_2].Row[1].Text, "Strona 2 -Wiersz 1");
    strcpy(Screen[Screen_2].Row[2].Text, "Strona 2 -Wiersz 2");
    strcpy(Screen[Screen_2].Row[3].Text, "Strona 2 -Wiersz 3");
    strcpy(Screen[Screen_2].Row[4].Text, "Strona 2 -Wiersz 4"); 

    strcpy(Screen[Screen_1].Row[5].Text, "Nastepny ekran");
    strcpy(Screen[Screen_2].Row[5].Text, "Nastepny ekran");
    strcpy(Screen[Screen_3].Row[5].Text, "Nastepny ekran");

    // DECLARE HERE LABELS FOR ROWS ^^
}

void loop() {

    ScreenActual = Screen[Screen_Selected];
    delay(200);
    //Rows Texts 
        Display.drawStr(Row_Text_Y,Row_1_X,ScreenActual.Row[1].Text);
        Display.drawStr(Row_Text_Y,Row_2_X,ScreenActual.Row[2].Text);
        Display.drawStr(Row_Text_Y,Row_3_X,ScreenActual.Row[3].Text);
        Display.drawStr(Row_Text_Y,Row_4_X,ScreenActual.Row[4].Text);
        Display.drawStr(Row_Text_Y,Row_5_X,ScreenActual.Row[5].Text);  

    for (int i = 1; i <= 5; i++) {
        if (ScreenActual.Row[i].Activated == true) {
            Display.setFont(u8g2_font_unifont_t_symbols);
            Display.drawGlyph(118,((Row_Height + 2) * i), 0x2714);//2714 <- Checkbox 
        }
        else {
            Display.setFont(u8g2_font_ncenB14_tr);
            Display.drawStr(118,((Row_Height + 2) * i), "   ");// Clear field with checkbox
        };
        delay(10);
    }    
    Display.setFont(u8g2_font_ncenB14_tr); // CHANGE FONT FOR TEXTS

    switch (Row_Selected){
        case Row_1:
            //Row1 
                Display.drawDisc(5,(Row_1_X-(Row_Height/2)),(Row_Height/2),U8G2_DRAW_ALL);
            //Row2
                Display.drawCircle(5,(Row_2_X-(Row_Height/2)),(Row_Height/2),U8G2_DRAW_ALL);
            //Row3
                Display.drawCircle(5,(Row_3_X-(Row_Height/2)),(Row_Height/2),U8G2_DRAW_ALL);
            //Row4
                Display.drawCircle(5,(Row_4_X-(Row_Height/2)),(Row_Height/2),U8G2_DRAW_ALL);
            //Row5
                Display.drawCircle(5,(Row_5_X-(Row_Height/2)),(Row_Height/2),U8G2_DRAW_ALL);
        break;
        case Row_2:
            //Row1 
                Display.drawCircle(5,(Row_1_X-(Row_Height/2)),(Row_Height/2),U8G2_DRAW_ALL);
            //Row2
                Display.drawDisc(5,(Row_2_X-(Row_Height/2)),(Row_Height/2),U8G2_DRAW_ALL);
            //Row3
                Display.drawCircle(5,(Row_3_X-(Row_Height/2)),(Row_Height/2),U8G2_DRAW_ALL);
            //Row4
                Display.drawCircle(5,(Row_4_X-(Row_Height/2)),(Row_Height/2),U8G2_DRAW_ALL);
            //Row5
                Display.drawCircle(5,(Row_5_X-(Row_Height/2)),(Row_Height/2),U8G2_DRAW_ALL);
        break;
        case Row_3:
            //Row1 
                Display.drawCircle(5,(Row_1_X-(Row_Height/2)),(Row_Height/2),U8G2_DRAW_ALL);
            //Row2
                Display.drawCircle(5,(Row_2_X-(Row_Height/2)),(Row_Height/2),U8G2_DRAW_ALL);
            //Row3
                Display.drawDisc(5,(Row_3_X-(Row_Height/2)),(Row_Height/2),U8G2_DRAW_ALL);
            //Row4
                Display.drawCircle(5,(Row_4_X-(Row_Height/2)),(Row_Height/2),U8G2_DRAW_ALL);
            //Row5
                Display.drawCircle(5,(Row_5_X-(Row_Height/2)),(Row_Height/2),U8G2_DRAW_ALL);
        break;
        case Row_4:
            //Row1 
                Display.drawCircle(5,(Row_1_X-(Row_Height/2)),(Row_Height/2),U8G2_DRAW_ALL);
            //Row2
                Display.drawCircle(5,(Row_2_X-(Row_Height/2)),(Row_Height/2),U8G2_DRAW_ALL);
            //Row3
                Display.drawCircle(5,(Row_3_X-(Row_Height/2)),(Row_Height/2),U8G2_DRAW_ALL);
            //Row4
                Display.drawDisc(5,(Row_4_X-(Row_Height/2)),(Row_Height/2),U8G2_DRAW_ALL);
            //Row5
                Display.drawCircle(5,(Row_5_X-(Row_Height/2)),(Row_Height/2),U8G2_DRAW_ALL);
        break;               
        case Row_5:
            //Row1 
                Display.drawCircle(5,(Row_1_X-(Row_Height/2)),(Row_Height/2),U8G2_DRAW_ALL);
            //Row2
                Display.drawCircle(5,(Row_2_X-(Row_Height/2)),(Row_Height/2),U8G2_DRAW_ALL);
            //Row3
                Display.drawCircle(5,(Row_3_X-(Row_Height/2)),(Row_Height/2),U8G2_DRAW_ALL);
            //Row4
                Display.drawCircle(5,(Row_4_X-(Row_Height/2)),(Row_Height/2),U8G2_DRAW_ALL);
            //Row5
                Display.drawDisc(5,(Row_5_X-(Row_Height/2)),(Row_Height/2),U8G2_DRAW_ALL);
        break;     

}