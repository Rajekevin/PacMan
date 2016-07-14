//
//  affich.c
//  pacmanc
//
//  Created by Elyes on 21/06/2016.
//  Copyright © 2016 Elyes. All rights reserved.
//

#include <windows.h>
#include "affich.h"
#include "motifs.h"
#include "setwindow.h"


#include <conio.h> //librairie






void affich(char map[20][38], int score, int bonus, int frame, int vies){

    int i, j;

    system("CLS");//efface lecran

     //textcolor(WHITE);
     printf("Deplacez vous a l'aide des touches z, q, s et d.\nTentez d'attraper les %c\nQuittez avec Echap\n", point);

    for(i=0; i<20; i++)
    {
        for(j=0; j<38; j++)
        {

            if(map[i][j] == 'C')
            {

            }
            else if(map[i][j] == 'M')
            {


            }
            else if(map[i][j] == '.')
            {

            }
            else if(map[i][j] == point)
            {

            }
            else
            {

            }

            printf("%c", map[i][j]); //On affiche le terrain

        }

    if(i==10){printf("        score : %d", score);};
    if(i==12){printf("        vies : %d", vies);};


        printf("\n");
    }



  if(bonus)
    {
        printf("========== BONUS ACTIVE %d ==========", 50 - frame);
    }


Sleep(200);
}
