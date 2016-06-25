#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void menu(int *entree)
{
    char saisie;

    system("CLS");

    printf("\n");

   textcolor(14);



printf("\t\t\t\t\t8b,dPPYba,  ,adPPYYba,  ,adPPYba, 88,dPYba,,adPYba,  ,adPPYYba, 8b,dPPYba,\n");
printf("\t\t\t\t\t88P!     !8a !!     !Y8 a8!!     !!88P!   !88!    !8a ''     `Y8 88P'   `'8a \n");
printf("\t\t\t\t\t88       d8 ,adPPPPP88 8b         88      88      88 ,adPPPPP88 88       88\n");
printf("\t\t\t\t\t88b,   ,a8! 88,    ,88 !8a,   ,aa 88      88      88 88,    ,88 88       88\n");
printf("\t\t\t\t\t88`YbbdP'  `'8bbdP'Y8  `'Ybbd8'   88      88      88 `'8bbdP'Y8 88       88\n");
printf("\t\t\t\t\t88 \n");
printf("\t\t\t\t\t88 \n");




printf("\t\t\t\t\t================================================.\n");
printf("\t\t\t\t\t     .-.   .-.     .--.                         |\n");
printf("\t\t\t\t\t    | OO| | OO|   / _.-' .-.   .-.  .-.   .''.  |\n");
printf("\t\t\t\t\t    |   | |   |   \  '-. '-'   '-'  '-'   '..'  |\n");
printf("\t\t\t\t\t    '^^^' '^^^'    '--'                         |\n");
printf("\t\t\t\t\t===============.  .-.  .================.  .-.  |\n");
printf("\t\t\t\t\t               | |   | |                |  '-'  |\n");
printf("\t\t\t\t\t               | |   | |                |       |\n");
printf("\t\t\t\t\t               | ':-:' |                |  .-.  |\n");
printf("\t\t\t\t\tl42            |  '-'  |                |  '-'  |\n");
printf("\t\t\t\t\t==============='       '================'       |\n");



    textcolor(15);
    printf("                                       Par Elyes EL BAHRI et Rajekevin DOUREPOULLE\n");

    printf("\n\n\n");
    textcolor(14);
    printf("                          1.JOUER\n\n");
    printf("                          2.MEILLEURS SCORES\n\n");
    printf("                          3.QUITTER\n\n");

    do
    {
        saisie = getch();

    }while((saisie>'3') || (saisie<'1'));

    *entree = saisie - 48;


}
