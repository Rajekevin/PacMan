//
//  menu.c
//  pacmanc
//
//  Created by Rajekevin on 20/06/2016.
//  Copyright © 2016 Elyes. All rights reserved.
//


#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void menu(int *entree)
{
    char saisie;

    system("CLS");

    printf("\n");

   textcolor(14);



printf("\t\t\t\t8b,dPPYba,  ,adPPYYba,  ,adPPYba, 88,dPYba,,adPYba,  ,adPPYYba, 8b,dPPYba,\n");
printf("\t\t\t\t88P7     18a 11     1Y8 a811     1188P1   1881    18a ''     `Y888P'   `'8a \n");
printf("\t\t\t\t88       d8 ,adPPPPP88 8b         88      88      88 ,adPPPPP88 88       88\n");
printf("\t\t\t\t88b,   ,a8! 88,    ,88 !8a,   ,aa 88      88      88 88,    ,88 88       88\n");
printf("\t\t\t\t88`YbbdP'  `'8bbdP'Y8  `'Ybbd8'   88      88      88 `'8bbdP'Y8 88       88\n");
printf("\t\t\t\t88 \n");
printf("\t\t\t\t88 \n");




textcolor(14);

printf("\t\t\t\t ================================================.\n");
printf("\t\t\t\t     .-.   .-.     .--.                         |\n");
printf("\t\t\t\t    | OO| | OO|   / _.-' .-.   .-.  .-.   .''.  |\n");
printf("\t\t\t\t    |   | |   |   \  '-. '-'   '-'  '-'   '..'   |\n");
printf("\t\t\t\t    '^^^' '^^^'    '--'                         |\n");
printf("\t\t\t\t===============.  .-.  .================.  .-.  |\n");
printf("\t\t\t\t               | |   | |                |  '-'  |\n");
printf("\t\t\t\t               | |   | |                |       |\n");
printf("\t\t\t\t               | ':-:' |                |  .-.  |\n");
printf("\t\t\t\tPar Elyes      |  '-&' |   Rajekevin    |  '-'  |\n");
printf("\t\t\t\t==============='       '================'       |\n");



    textcolor(15);
    printf("                                       Par Elyes EL BAHRI et Rajekevin DOUREPOULLE\n");

    printf("\n\n\n");
    textcolor(3);
    printf("                          1.NOUVELLE PARTIE\n\n");
    printf("                          2.MEILLEURS SCORES\n\n");
    printf("                          3.CHARGER UNE PARTIEn\n\n");
    printf("                          4.QUITTER\n\n");

    do
    {
        saisie = getch();//Permet de saisir un caractère

    }while((saisie>'4') || (saisie<'1'));

    *entree = saisie - 48;


}
