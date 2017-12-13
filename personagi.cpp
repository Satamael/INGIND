void draw_human(int x,int y, int noga);
void human_skruchennii(int x,int y);
void draw_lustra(); // люстра
void draw_window(); // окно
void draw_cat_body();
void draw_cat_head();
void draw_table(int knopka);  // стол
void draw_door_close(); // дверь закрытая
void draw_door_open();  // дверь открытая
void draw_computer();
void draw_monitor();
void lesnica_spuskaetsya(int hernya);
void draw_lestnica(int vysota);
void statica(int knopka);
void draw_bluehuman(int x,int y);
void Player (int x, int y, int noga, int ydar);
void enemy(int x,int y, int noga);


void draw_human(int x,int y, int noga)
{
    txSetColor(TX_BLACK,8);
    txSetFillColor(TX_WHITE);
    txCircle(x,y,20);      //голова
    txSetColor(TX_BLACK,3);
    txLine(x,y+20,x,y+100);//тело
    txLine(x,y+30,x+30,y+120); //руки
    txLine(x,y+30,x-30,y+120); //руки
    txLine(x,y+100,x+20,y+180);  //ноги

    if (noga == 0)
    {
        txLine(x,y+100,x-20,y+180); //ноги
    }
    else
    {
        txLine(x,y+100,x-40,y+180); //ноги
    }
}

void human_skruchennii(int x,int y)
{
    txSetColor(TX_BLACK,8);
    txSetFillColor(TX_WHITE);
    txCircle(x,y,20);      //голова
    txSetColor(TX_BLACK,3);
    txLine(x,y+20,x,y+100);//тело
    txLine(x,y+40,x+30,y+10);//руки
    txLine(x,y+50,x+50,y+35);
    txLine(x+50,y+35,x+30,y);
    txLine(x,y+100,x+45,y+125);//ноги
    txLine(x,y+100,x+35,y+165);//ноги
    txLine(x+35,y+165,x+45,y+125);
 }

void draw_lustra()
{
    txSetColor(TX_BLACK, 3);
    txLine(320,80,320,140); //к средниму плафону
    txLine(260,120,380,120); // середина люстры
    txArc (300,140,340,180,0,180); // средний плафон
    txLine(380,120,400,140); // к правому плафону
    txArc (380,140,420,180,0,180); // правый плафон
    txLine(260,120,240,140);    // к левому плафону
    txArc (220,140,260,180,0,180); // левый плафон
    txLine (380,160,420,160); // правый плафон
    txLine (300,160,340,160); // средний плафон
    txLine (220,160,260,160); // левый плафон
    txLine (380,160,420,160); // правый плафон
    txLine (300,160,340,160); // средний плафон
    txLine (220,160,260,160); // левый плафон
    txSetColor(TX_BLACK, 1);
    txSetFillColor(TX_YELLOW);
    txFloodFill (240,150);
    txFloodFill (315,150);
    txFloodFill (318,151);
    txFloodFill (400,152);
}

void draw_window()
{
    txSetColor(TX_BLACK, 2);
    txRectangle(0,438,10,278); // окно
    txSetColor(TX_BLACK, 3);
    txLine(10,380,15,380); // ручка окна
    txLine(15,380,15,387); // ручка окна
    txLine(15,387,12,387); // ручка окна
    txSetColor(TX_BLACK, 4);
    txRectangle(0,440,60,420); // подоконник
    txSetFillColor(TX_BROWN);
    txFloodFill (13, 430);
    txSetFillColor(TX_LIGHTBLUE);
    txFloodFill (4, 400);
    txSetColor(TX_BLACK, 1);
}

void draw_cat_body()
{
    txSetColor(TX_BLACK, 5);
    txSetFillColor(TX_BLACK);
    txEllipse (35, 420, 60, 360); //тело кота
    txSetFillColor(TX_BLACK);
    txCircle(57,415,1); //лапки
    txSetFillColor(TX_WHITE);
    txLine(33,341,41,316); //уши
    txLine(41,316,53,331); //уши

    draw_cat_head();
}

void draw_cat_head()
{
    txSetColor(TX_BLACK, 8);
    txSetFillColor(TX_WHITE);
    txCircle(50,345,15);//голова кота
    txLine(37,417,22,390); //хвост
    txLine(22,390,12+random(15),350); //хвост
}

void draw_table(int knopka)
{
     txSetColor(TX_BLACK, 5);
     txLine(180,420,180,520); // ножки
     txLine(360,420,360,520); // ножки
     txSetColor(TX_BLACK, 3);
     txSetFillColor(TX_BROWN);
     txRectangle(140,440,400,360);// столешница
     txSetFillColor(TX_WHITE);
     txSetColor(TX_BLACK, 1);
     if (knopka == 0)
     {
         txSetColor(TX_BLACK, 1);
         txSetFillColor(TX_RED);
         txRectangle(192,440,220,452);
     }
     else
     {
         txSetColor(TX_BLACK, 1);
         txSetFillColor(TX_RED);
         txRectangle(192,440,220,442);
     }
}
void draw_door_close()
{
    txSetColor(TX_BLACK, 2);
    txRectangle(790,520,800,300); // дверь закрытая
    txSetFillColor(TX_BLACK); // ручка цвет
    txCircle(775,410, 10); // дверь ручка
    txLine(785,410,795,410); // дверь ручка
    txSetFillColor(TX_LIGHTGRAY);
    txFloodFill (797, 490);
    txSetFillColor(TX_WHITE);
}

void draw_door_open()
{
    txSetColor(TX_BLACK, 3);
    txSetFillColor(TX_LIGHTGRAY);
    POINT bokovushka[4] = {
        {630,350},
        {640,360},
        {640,540},
        {630,530}
    };
    txPolygon (bokovushka, 4);

    POINT peredushka[4] = {
        {800,300},
        {640,360},
        {640,540},
        {800,520}
    };
    txPolygon (peredushka, 4);

    POINT verhushka[4] = {
        {630,350},
        {640,360},
        {800,300},
        {800,290}
    };
    txPolygon (verhushka, 4);

    txSetFillColor(TX_BLACK); // открытая дверь ручка
    txCircle(690,460,10); // открытая дверь ручка
}

void draw_monitor()
{
    txSetColor(TX_BLACK, 3);
    txSetFillColor(RGB(122,122,122));
    txRectangle(200,300,300,380); //экран (корпус)
    txSetFillColor(TX_GREEN);
    txRectangle(205,305,295,375); //экран
}

void draw_computer()
{
    draw_monitor();
    txSetFillColor(TX_LIGHTGRAY);
    txSetColor(TX_BLACK, 3);
    txRectangle(202,383,302,413); //клавиатура
    for (int x = 202; x < 302; x += 10)
    {
        txLine(x, 383, x, 413);
    }
    for (int y = 383; y < 413; y += 10)
    {
        txLine(202, y, 302, y);
    }

    txEllipse (335,400, 320, 378); //мышь
    txLine(327,380,327,390); //мышь
    txLine(320,390,332,390); //мышь
}

void lesnica_spuskaetsya(int hernya)
{
    txSetFillColor(TX_WHITE);
    txSetColor(TX_BLACK, 3);
    txLine(620, hernya,620,hernya+40);
    txSetColor(TX_BLACK, 6);
    txSetFillColor(TX_BLACK);
    txCircle(620,hernya+40, 5);
}

void draw_lestnica(int vysota)
{
    int w = 0;
    while (w <= vysota)
    {
        lesnica_spuskaetsya(w);
        w = w + 40;
    }
}

void statica(int knopka)
{
    txSetFillColor(TX_WHITE);
    txClear();

    //Пол потолок
    txSetColor(TX_BLACK, 7);
    txLine(0,80,800,80); // потолок
    txLine(0,520,800,520); // пол

    draw_lustra(); // люстра
    draw_window(); // окно
    txSetColor(TX_BLACK, 5);
    txLine(228,520,228,470); //табурет
    txLine(273,520,273,470);//табурет
    txLine(222,470,279,470);//табурет
    draw_table(knopka);  // стол
    draw_computer();
    draw_cat_body();
}

void draw_bluehuman(int x,int y)
{
    txSetColor(TX_BLUE,8);
    txSetFillColor(TX_BLUE);
    txCircle(x,y,20);      //голова
    txSetColor(TX_BLUE,3);
    txLine(x,y+20,x,y+100);//тело
    txLine(x,y+30,x+30,y+120); //руки
    txLine(x,y+30,x-30,y+120); //руки
    txLine(x,y+100,x+20,y+180);  //ноги
    txLine(x,y+100,x-20,y+180);

    for (int ryab = 0; ryab < 30; ryab++)
    {
        int y_ryabi = y + random(-20, 20);
        txSetColor(RGB(random(255),random(255),random(255)), 3);
        txLine(x - random(50), y_ryabi, x + random(50), y_ryabi);
        txSleep(10);
    }
}

void Player (int x, int y, int noga, int ydar)
{

    txSetColor(TX_GREEN,8);
    txSetFillColor(TX_GREEN);
    txSetColor(TX_GREEN,3);
    txLine(x,y+20,x,y+100);//тело
    txLine(x,y+20,x+30,y+120); //руки
    txLine(x,y+100,x+30,y+180);  //ноги
    HDC  NeoFace = txLoadImage ("NeoFace.bmp");
    txTransparentBlt(txDC(), x-60, y-100, 117, 125, NeoFace, 0, 0, TX_WHITE);
    txDeleteDC(NeoFace);
    if (noga == 0)
    {
        txLine(x,y+100,x-20,y+180); //ноги
    }

    else
    {

        txLine(x,y+100,x-40,y+180); //ноги
    }
 if (ydar == 0)
    {
    txLine(x,y+20,x-30,y+120); //руки
    }
if (ydar == 1)
    {

       txLine(x,y+20,x-50,y+70); //руки
       txLine(x-50,y+70,x-80,y+10); //руки
       HDC  perch = txLoadImage ("Перчатка.bmp");
       txTransparentBlt(txDC(), x-120,y-36,86,76, perch, 0,0, RGB(255 , 255, 255));
       txDeleteDC(perch);
      }
}

void enemy(int x,int y, int noga)
{
txSetColor(TX_GREEN,8);
    txSetFillColor(TX_GREEN);
    txSetColor(TX_GREEN,3);
    txLine(x,y+20,x,y+100);//тело
    txLine(x,y+20,x-30,y+120);
    txLine(x,y+20,x+30,y+120); //руки
    txLine(x,y+100,x+30,y+180);  //ноги
    HDC  SmithFace = txLoadImage ("SmithFace.bmp");
    txTransparentBlt(txDC(), x-60, y-100, 103, 130,SmithFace, 0, 0, TX_WHITE);
    txDeleteDC(SmithFace);
    if (noga == 0)
    {
        txLine(x,y+100,x-20,y+180); //ноги
    }

    else
    {

        txLine(x,y+100,x-40,y+180); //ноги
    }
 txDeleteDC(SmithFace);

 }
