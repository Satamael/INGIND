#include "TXLib.h"
#include "personagi.cpp"
#include "action.cpp"




int main()
{
   txCreateWindow (800, 600); // холст

    /*//Scene 1
    nachalo();


    //Scene 2
    dver_otkrivaetsya();


    //Scene 3
    idet_i_pechataet();

    //Scene 4
    nazhimaet_na_knopky();
    luk_otkrivaetsa(0);
    luk_otkrivaetsa(1);

    //Scene 5
    int w = 0;
    while(w<520)
    {
        lesnica_spuskaetsya(w);
        txSleep(500);
        w=w+40;
    }
    int vysota=350;
    lezet_v_luk(0);

    //Scene 6
    human_lezet(586,vysota);

    //Scene 7
    idet_k_turniku();

    //Scene 8

    w=1;
    while(w<12)
    {
    human_podtyagivaetsya(195,365,w%2);
    txTextOut (50, 20, "Как вдруг появился...");
    txSleep(300);
    w=w+1;
    }

    *///Scene 8
    idet_k_Morfeusu();

    //Scene 9
    choose();


    return 0;
}

