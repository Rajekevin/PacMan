//
//  menu.c
//  pacmanc
//
//  Created by Rajekevin on 20/06/2016.
//  Copyright © 2016 RK. All rights reserved.
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



textcolor(9);
printf("\t\t\t\t ================================================.\n");
 textcolor(13);
printf("\t\t\t\t     .-.   .-.                                  ");
 textcolor(15);
printf("1.NOUVELLE PARTIE\n");
  textcolor(13);
printf("\t\t\t\t    | OO| | OO|                                 ");
 textcolor(15);
printf("2.MEILLEURS SCORES\n");
  textcolor(13);
printf("\t\t\t\t    |   | |   |                                 ");

printf("\n");
 textcolor(13);
printf("\t\t\t\t    '^^^' '^^^'                                 ");
 textcolor(15);
printf("3.QUITTER \n");
textcolor(9);
printf("\t\t\t\t ====================        =====================.\n");
textcolor(14);
printf("\t\t\t\t .--.  \n");
printf("\t\t\t\t/ _.-' .-.   .-.  .-.  .-.   .-.  .-. .-.  .-.   \n");
printf("\t\t\t\t\  '-.  '-'   '-'  '-'  '-'   '-'  '-' '-'  '-'   \n");
printf("\t\t\t\t '--'  \n");








textcolor(9);
/*1 ligne done*/
printf("\t\t\t\t===============.");
 textcolor(13);
printf("  .-.  ");
textcolor(9);
printf(".================.");
textcolor(14);
printf("  .-.  ");
textcolor(9);
printf("|\n");

/*2 ligne done*/
textcolor(9);
printf("\t\t\t\t               |");
 textcolor(13);
printf(" |   | ");
textcolor(9);
printf("|                |");
textcolor(14);
printf("  '-'  ");
textcolor(9);
printf("|\n");


/*3 ligne done*/
printf("\t\t\t\t               |");
 textcolor(13);
printf(" |   | ");
textcolor(9);
printf("|                |");
printf("       ");
printf("|\n");


/*4 ligne done*/
printf("\t\t\t\t               |");
 textcolor(13);
printf(" ':-:' ");
textcolor(9);
printf("|                |");
printf("  .-.  ");
printf("|\n");

/*AUTHOR*/
 textcolor(15);
printf("\t\t\t\tPar Elyes      ");
textcolor(9);
printf("|  '-");
 textcolor(15);
printf("&");
textcolor(9);
printf("' |");
 textcolor(15);
printf("   Rajekevin    ");
textcolor(9);
printf("|  '-'  |\n");
printf("\t\t\t\t==============='       '================'       |\n");






    do
    {
        saisie = getch();//Permet de saisir un caractère

    }while((saisie>'4') || (saisie<'1'));

    *entree = saisie - 48;


}
