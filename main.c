#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h> //librairie
#include <myconio.h>

#include "menu.h"

int main()
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




