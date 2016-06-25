#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <myconio.h>
#include "menu.h"

int main()
{

char saisie;
system("CLS");
int mode;


printf("   ▄███████▄    ▄████████  ▄████████   ▄▄▄▄███▄▄▄▄      ▄████████ ███▄▄▄▄  \n");
printf("  ███    ███   ███    ███ ███    ███ ▄██▀▀▀███▀▀▀██▄   ███    ███ ███▀▀▀██▄\n ");
printf("  ███    ███   ███    ███ ███    █▀  ███   ███   ███   ███    ███ ███   ███ \n");
printf("  ███    ███   ███    ███ ███        ███   ███   ███   ███    ███ ███   ███ \n");
printf("▀█████████▀  ▀███████████ ███        ███   ███   ███ ▀███████████ ███   ███\n");
printf("  ███          ███    ███ ███    █▄  ███   ███   ███   ███    ███ ███   ███\n");
printf("  ███          ███    ███ ███    ███ ███   ███   ███   ███    ███ ███   ███\n ");
printf(" ▄████▀        ███    █▀  ████████▀   ▀█   ███   █▀    ███    █▀   ▀█   █▀ \n ");









     do
    {
        menu(&mode);
        switch(mode)
        {
        case 1 :
            printf("test\n\n");
            break;

        case 2:
            printf("test\n\n");
            break;

        default:
            break;

        }
    }while(mode>0 && mode<3);


    do
    {
        saisie = getch();

    }while((saisie>'3') || (saisie<'1'));

   *entree = saisie - 48;


}




