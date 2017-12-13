void coming_programmer();
void najatie_knopki();
void part_of_scene4(int knopka);
void nachalo();
void dver_otkrivaetsya();
void idet_i_pechataet();
void nazhimaet_na_knopky();
void lezet_v_luk(int noga);
void luk_otkrivaetsa(int luk);
void human_lezet(int x,int y);
void idet_k_turniku();
void human_podtyagivaetsya(int x,int y, int ruka);
void idet_k_Morfeusu();
void choose();
void blue();
void red();



void coming_programmer()
{
    draw_monitor();
    for (int y = 305; y < 375; y += 10)
    {
        txLine(210, y, 210 + random (80), y);
    }
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

    {//сам программист
    txSetColor(TX_BLACK,8);
    txSetFillColor(TX_WHITE);
    txCircle(250,345, 20); //голова
    txSetColor(TX_BLACK,3);
    txLine(250,365,250,470); //тело
    txLine(250,375,228,415);//плечо
    txLine(228,415,215 + random(40),400 - random(10));//рука
    txLine(250,375,272,415);//плечо
    txLine(272,415,260 + random(40),400 - random(10));//рука
    txLine(250,470,265,455);//бедро
    txLine(250,470,235,455);//бедро
    txLine(235,455,235,520);//нога
    txLine(265,455,265,520);//нога

    }
}


void najatie_knopki()
{
    part_of_scene4(0);
    txSleep(1000);
    part_of_scene4(1);
    txSleep(1000);
    part_of_scene4(0);
    txSleep(1500);
}

void part_of_scene4(int knopka)
{
    statica(knopka);
    draw_door_close();
    txSelectFont ("Comic Sans MS", 60);
    txSetColor(TX_BLACK);
    txSetFillColor(TX_WHITE);
    txTextOut (50, 20, "ѕќƒЌя“№—я Ќј  –џЎ”");

    //—идит
    txSetColor(TX_BLACK,8);
    txSetFillColor(TX_WHITE);
    txCircle(250,345, 20); //голова
    txSetColor(TX_BLACK,3);
    txLine(250,365,250,470); //тело
    txLine(250,470,265,455);//бедро
    txLine(250,470,235,455);//бедро
    txLine(235,455,235,520);//нога
    txLine(265,455,265,520);//нога

    txLine(250,375,228,415);//плечо
    txLine(250,375,272,415);//плечо
    //–уки
    txLine(300,411,272,415);
    if (knopka == 0)
    {
        txLine(205,442 + 10,228,415); //
    }
    else
    {
        txLine(205,442     ,228,415); //
    }
}

void luk_otkrivaetsa(int luk)
{
    statica(0);
    draw_door_close();
    draw_human(280,340, 0);
    txSetColor(TX_BLACK,4);
    txSetFillColor(TX_LIGHTGRAY);
    txCircle(655,95,10);

    if (luk == 0)
    {
        txRectangle(645,100,495,80);
    }
    else
    {
        txRectangle(670,105,650,255);
        txSetColor(TX_WHITE,5);
        txSetFillColor(TX_WHITE);
        txRectangle(645,70,490,85);
        txSetColor(TX_BLACK,7);
        txLine(490,80,490,0);
        txLine(650,80,650,0);
    }

    txSleep(1100);
}

void nachalo()
{
    statica(0);
    txSelectFont ("Comic Sans MS", 25);
    txTextOut (0, 2, "ќдин человек пришЄл домой, и вспомнил, что ему нужно запрограмировать мультик.");
    draw_door_close();
    txTextOut (0, 25, "ќн решил сделать мультик, о том как ему нужно было сделать мультик, и он решил ");
    txSleep(3000);
}

void dver_otkrivaetsya()
{
    statica(0);
    draw_door_open();
    txSleep(1000);
}

void idet_i_pechataet()
{
    statica(0);
    draw_door_close();
    draw_human(720,340, 0);
    txSelectFont ("Comic Sans MS", 40);
    txTextOut(0, 24,"—делать мультик о том как....");
    txSleep(1000);

    int noga = 0;
    for (int x_cheloveka = 720; x_cheloveka >= 280; x_cheloveka -= 10)
    {
        txBegin();
        statica(0);

        draw_door_close();
        txSelectFont ("Comic Sans MS", 25);
        txTextOut (0, 20, "ќн решил сделать мультик, о том как ему нужно было сделать мультик, и он сделал");
        txTextOut (0, 35, "ћультик о том, как сделал мультик о том как написал такой мультик и решил");

        if (noga == 0)
        {
            noga = 1;
        }
        else
        {
            noga = 0;
        }

        draw_human(x_cheloveka,340, noga);
        txSleep(100);
        txEnd();
    }

    for (int x = 1; x < 100; x++)
    {
        txBegin();
        statica(0);

        draw_door_close();
        txSelectFont ("Comic Sans MS", 25);
        txTextOut (0, 20, "ќн решил сделать мультик, о том как ему нужно было сделать мультик, и он сделал");
        txTextOut (0, 35, "ћультик о том, как сделал мультик о том как написал такой мультик и решил");

        coming_programmer();
        txSleep(100);
        txEnd();
    }
}

void nazhimaet_na_knopky()
{
    najatie_knopki();
    txSleep(500);
    statica(0);
    draw_door_close();
    draw_human(280,340, 0);
    txSelectFont ("Comic Sans MS", 60);
    txTextOut (50, 20, "ѕќƒЌя“№—я Ќј  –џЎ”, „“ќЅџ");
    txSetColor(TX_BLACK);
}

void lezet_v_luk(int noga)
{
    draw_human(280,340, 0);
    txSelectFont ("Comic Sans MS", 60);
    txTextOut (50, 20, "ѕќƒЌя“№—я Ќј  –џЎ” „“ќЅџ");
    txSetColor(TX_BLACK);
    noga = 0;
    for (int x_cheloveka = 280; x_cheloveka <= 570; x_cheloveka += 10)
    {
        txBegin();
        statica(0);
        txSetColor(TX_WHITE,5);
        txSetFillColor(TX_WHITE);
        txRectangle(645,70,490,85);
        txSetColor(TX_BLACK,7);
        txLine(490,80,490,0);
        txLine(650,80,650,0);
        txSetColor(TX_BLACK,4);
        txSetFillColor(TX_LIGHTGRAY);
        txCircle(655,95,10);
        txRectangle(670,105,650,255);
        draw_door_close();

        draw_lestnica(520);

        if (noga == 0)
        {
            noga = 1;
        }
        else
        {
            noga = 0;
        }

        draw_human(x_cheloveka,340, noga);
        txSleep(100);
        txEnd();
    }
 }
void human_lezet(int x,int y)
{
    for (int vysota = 520; vysota >= 0; vysota = vysota - 40)
    {
        y=vysota - 200;
        statica(0);
        txSetColor(TX_WHITE,5);
        txSetFillColor(TX_WHITE);
        txRectangle(645,70,490,85);
        txSetColor(TX_BLACK,7);
        txLine(490,80,490,0);
        txLine(650,80,650,0);
        txSetColor(TX_BLACK,4);
        txSetFillColor(TX_LIGHTGRAY);
        txCircle(655,95,10);
        txRectangle(670,105,650,255);
        draw_door_close();
        draw_lestnica(vysota);
        human_skruchennii(x,y);

        txSleep(500);
    }
}


 void idet_k_turniku()
 {
    txClear();
    HDC  krisha = txLoadImage ("турник на крыше.bmp");
    HDC  nebo = txLoadImage ("небо.bmp");
    for (int i = 0; i < 100; i++)
    {
        txBitBlt(txDC(), 0, 0, 800, 600, nebo, 0, 0);
        txTransparentBlt(txDC(), 0, 0, 800, 600, krisha, 0, 0, TX_WHITE);
        txSelectFont ("Comic Sans MS", 60);
        txTextOut (50, 20, "ѕодкачатьс€ на турнике");
        draw_human(700 - 5*i,400, i%2);
        txSleep(100);
    }

    txDeleteDC (krisha);
    txDeleteDC (nebo);
}

void human_podtyagivaetsya(int x,int y, int ruka)
{
    HDC  krisha = txLoadImage ("турник на крыше.bmp");
    HDC  nebo = txLoadImage ("небо.bmp");
    txBitBlt(txDC(), 0, 0, 800, 600, nebo, 0, 0);
    txTransparentBlt(txDC(), 0, 0, 800, 600, krisha, 0, 0, TX_WHITE);

    txSetColor(TX_BLACK,8);
    txSetFillColor(TX_WHITE);
    if (ruka == 0)
    {
        txCircle(x,y,20);      //голова
        txSetColor(TX_BLACK,3);
        txLine(x,y+20,x,y+100);//тело
        txLine(x,y+30,x+30,y+35); //руки
        txLine(x,y+30,x-30,y+35); //руки
        txLine(x+30,y+35,x+60, y-15); //руки
        txLine(x-30,y+35,x-60, y-15); //руки
        txLine(x,y+100,x+20,y+180);  //ноги
        txLine(x,y+100,x-20,y+180);  //ноги
    }
    else
    {
        txCircle(x,y-30,20);      //голова
        txSetColor(TX_BLACK,3);
        txLine(x,y-10,x,y+70);//тело
        txLine(x,y,x+30,y+5); //руки
        txLine(x,y,x-30,y+5); //руки
        txLine(x+30,y+5,x+60, y-15); //руки
        txLine(x-30,y+5,x-60, y-15); //руки
        txLine(x,y+70,x+20,y+150);  //ноги
        txLine(x,y+70,x-20,y+150);  //ноги
    }
}

void idet_k_Morfeusu()
{
    HDC  krisha = txLoadImage ("турник на крыше.bmp");
    HDC  nebo = txLoadImage ("небо.bmp");
    HDC  Morfeus = txLoadImage ("морфеус6.bmp");
    for (int x_cheloveka = 195; x_cheloveka <= 395; x_cheloveka += 5)
    {

        txBitBlt(txDC(), 0, 0, 800, 600, nebo, 0, 0);
        txTransparentBlt(txDC(), 0, 0, 800, 600, krisha, 0, 0, TX_WHITE);
        txTransparentBlt(txDC(), 520,415,124,170, Morfeus, 0,0, RGB(255 , 255, 255));
        txTextOut (50, 20, "ћорфеус и предложил ему выбрать:");
        draw_human(x_cheloveka, 400,x_cheloveka%2);
        txSleep(100);
    }

    txDeleteDC(krisha);
    txDeleteDC(nebo);
    txDeleteDC(Morfeus);
    txSleep(2000);
}

void choose()
{
    txSetFillColor(RGB(255,255,255));
    txClear();
    HDC  choose = txLoadImage ("таблетки.bmp");
    txSetFillColor(TX_WHITE);
    txBitBlt(txDC(), 0, 100, 800, 600, choose, 0, 0);
    txDeleteDC(choose);
     while (!GetAsyncKeyState(VK_ESCAPE))
    {
       if (txMouseButtons() &1
         && txMouseX() > 160
         && txMouseX() < 230
         && txMouseY() > 370
         && txMouseY() < 440)
        {
            red();
            txSleep(100);
        }

        if (txMouseButtons() &1
         && txMouseX() > 530
         && txMouseX() < 600
         && txMouseY() > 400
         && txMouseY() < 460)
        {
            blue();
            txSleep(100);
        }

    }

    //txTextOut (50, 20, "");
    //txTextOut (50, 20, "");
    //txSleep(20000);
}

void red()
{
 HDC  krisha = txLoadImage ("турник на крыше.bmp");
    HDC  nebo = txLoadImage ("небо.bmp");
    HDC  Morfeus = txLoadImage ("морфеус6.bmp");
    txBitBlt(txDC(), 0, 0, 800, 600, nebo, 0, 0);
    txTransparentBlt(txDC(), 0, 0, 800, 600, krisha, 0, 0, TX_WHITE);
    txTransparentBlt(txDC(), 520,415,124,170, Morfeus, 0,0, RGB(255 , 255, 255));
    int xpl =395;
    int ypl =400;
    int yd=0;
    int xen =50;
    int yen =400;
    //int nogaen =xen%2;
    bool knopka_vybrana = false;
    while (!knopka_vybrana)
    {
    txBegin();
    txBitBlt(txDC(), 0, 0, 800, 600, nebo, 0, 0);
    txTransparentBlt(txDC(), 0, 0, 800, 600, krisha, 0, 0, TX_WHITE);
    txTransparentBlt(txDC(), 520,415,124,170, Morfeus, 0,0, RGB(255 , 255, 255));
     if (GetAsyncKeyState('A'))
    {
    xpl = xpl - 11;
    }

    if (GetAsyncKeyState('D'))
    {
    xpl = xpl + 11;
    }
    if (GetAsyncKeyState('K'))
    {
    yd=1;
    }
    else
    {
    yd=0;
    }
    enemy(xen,yen,xen%2);
    Player(xpl,ypl, xpl%2,yd);
    txSleep(10);
    xen=xen+3;

    if(xen>480)
    {
    knopka_vybrana = true;
    HDC  MorfeusKilled = txLoadImage ("морфеус”бит.bmp");
    txBitBlt(txDC(), 0, 0, 800, 600,MorfeusKilled,0,0);
    txDeleteDC(MorfeusKilled);
    }


    if(yd==1 and xpl-xen<80)
    {
    int nogaen=1;
    for (int flyed = 1; flyed < 100; flyed++)
    {
    enemy(xen,yen,nogaen);
    txSleep(10);
    yen=yen-30;
    xen=xen-15;
    txTextOut (50, 20, "Ѕлагода€ тебе матрица спасена!");
    }
   knopka_vybrana = true;
    HDC  WIN = txLoadImage ("WIN.bmp");
    txSetFillColor(TX_BLACK);
    txClear();
    txBitBlt(txDC(), 0, 0, 800, 600, WIN, 0, 0);
knopka_vybrana = true;
    }
    /*if(yd==1)
     {
       var=1;
    }
     if(yd==1 and xpl-xen<60)
     {

     var=1;
    }

     if(xen==450)
     {

    var=2;
    }

if(!GetAsyncKeyState(VK_ESCAPE))
     {

    var=0;
    }

    if(var==1);
    {
    nogaen=1;
    for (int flyed = 1; flyed < 100; flyed++)
    {
    enemy(xen,yen,nogaen);
    yen=yen+20;
    xen=xen-5;
    }
    }
    if(var==2)
    {
    txSleep(500);
    HDC  MorfeusKilled = txLoadImage ("морфеус”бит.bmp");
    txBitBlt(txDC(), 0, 0, 800, 600,MorfeusKilled,0,0);
    txDeleteDC(MorfeusKilled);
    }*/
txEnd();
}
}


void blue()
{
    HDC  krisha = txLoadImage ("турник на крыше.bmp");
    HDC  nebo = txLoadImage ("небо.bmp");
    HDC  Morfeus = txLoadImage ("морфеус6.bmp");
    txBitBlt(txDC(), 0, 0, 800, 600, nebo, 0, 0);
    txTransparentBlt(txDC(), 0, 0, 800, 600, krisha, 0, 0, TX_WHITE);
    txTransparentBlt(txDC(), 520,415,124,170, Morfeus, 0,0, RGB(255 , 255, 255));
    draw_bluehuman(395,400);
    HDC  SmithFace = txLoadImage ("SmithFace.bmp");
    txTransparentBlt(txDC(), 350, 295, 103, 130, SmithFace, 0, 0, TX_WHITE);
    txDeleteDC(SmithFace);
    txSleep(500);
    HDC  MorfeusKilled = txLoadImage ("морфеус”бит.bmp");
    txBitBlt(txDC(), 0, 0, 800, 600,MorfeusKilled,0,0);
    txDeleteDC(MorfeusKilled);

}
