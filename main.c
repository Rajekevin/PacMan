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

#include "menu.h"
#include "structures.h"
#include "init.h"
#include "affich.h"

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




