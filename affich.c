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

     textcolor(15);
     printf("Deplacez vous a l'aide des touches z, q, s et d.\nTentez d'attraper les %c\nQuittez avec Echap\n", point);

    for(i=0; i<20; i++)
    {
        for(j=0; j<38; j++)
        {

            if(map[i][j] == 'C')
            {
                textcolor(14);

            }
            else if(map[i][j] == 'M')
            {
                textcolor(12);
                 if(bonus && (frame<35 || frame%2))
                {
                    textcolor(10);
                }


            }
            else if(map[i][j] == '.')
            {
                textcolor(15);

            }
            else if(map[i][j] == point)
            {
                textcolor(10);

            }
            else
            {
                textcolor(9);

            }

            printf("%c", map[i][j]); //On affiche le terrain

        }

    textcolor(14);
    if(i==10){printf("        score : %d", score);};
    if(i==12){printf("        vies : %d", vies);};


        printf("\n");
    }


textcolor(10);
  if(bonus)
    {
        printf("========== BONUS ACTIVE %d ==========", 50 - frame);
    }

 textcolor(15);
Sleep(200);
}
