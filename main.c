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
#include "ghost.h"
#include "move.h"
#include "rendumap.h"

#include "ReadScore.h"
#include "triScore.h"

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




 //SetWindow(70,26); //On redimentionne la fenêtre
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
            rendumap(mappage);
            affich(mappage,0, 0, 0, 3);
            move(mappage, &PacMan, &ghostA, &ghostB, &ghostC, &ghostD); //On lance la gestion des déplacements



            srand(time(NULL)); //On initialise les nombres aléatoires

            return 0;

            break;

        case 2:
            system("CLS");

              char pseudo[100][4];  //Les deux tableaux suivants servent à l'affichage des meilleurs scores
            int score[100];
            int maxi;



           maxi = ReadScore(pseudo, score);
            triScore(pseudo, score, maxi);

            printf("test\n\n");
            break;

        default:
            break;

        }
    }while(mode>0 && mode<4);



return 0;

}




