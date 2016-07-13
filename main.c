//
//  main.c
//  pacmanc
//
//  Created by Rajekevin on 20/06/2016.
//  Copyright © 2016 RK. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h> //librairie
#include <myconio.h>
#include <windows.h>

#include "menu.h"
#include "structures.h"

#include "init.h"
#include "affich.h"

#include "setwindow.h"

int main(int argc, const char * argv[])
{




printf("   ▄███████▄    ▄████████  ▄████████   ▄▄▄▄███▄▄▄▄      ▄████████ ███▄▄▄▄  \n");
printf("  ███    ███   ███    ███ ███    ███ ▄██▀▀▀███▀▀▀██▄   ███    ███ ███▀▀▀██▄\n ");
printf("  ███    ███   ███    ███ ███    █▀  ███   ███   ███   ███    ███ ███   ███ \n");
printf("  ███    ███   ███    ███ ███        ███   ███   ███   ███    ███ ███   ███ \n");
printf("▀█████████▀  ▀███████████ ███        ███   ███   ███ ▀███████████ ███   ███\n");
printf("  ███          ███    ███ ███    █▄  ███   ███   ███   ███    ███ ███   ███\n");
printf("  ███          ███    ███ ███    ███ ███   ███   ███   ███    ███ ███   ███\n ");
printf(" ▄████▀        ███    █▀  ████████▀   ▀█   ███   █▀    ███    █▀   ▀█   █▀ \n ");


char saisie;
system("CLS");
int mode;

 //SetWindow(70,26); //On redimentionne la fenêtre (c'est le seul réglage faisabl
SetWindow(70,26);
printf("cc");

  do
    {
        menu(&mode);


        switch(mode)
        {
        case 1:
            printf("test\n\n");

             char mappage[20][38];

            coordonees PacMan;
            coordonees ghostA;
            coordonees ghostB;
            coordonees ghostC;
            coordonees ghostD;

            init(mappage, &PacMan, &ghostA, &ghostB, &ghostC, &ghostD);
            affich(mappage);

            SetWindow(70,30); //On redimentionne la fenêtre (c'est le seul réglage faisable automatiquement)
            srand(time(NULL)); //On initialise les nombres aléatoires

            return 0;

            break;

        case 2:

            printf("test\n\n");
            break;

        default:
            break;

        }
    }while(mode>0 && mode<4);



return 0;

}




