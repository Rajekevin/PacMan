//  affich.c
//  pacmanc
//
//  Worked by Elyes & RK on 21/06/2016.
//  Copyright © 2016 Elyes. All rights reserved.
//

#include <windows.h>
#include "affich.h"
#include "motifs.h"
#include "setwindow.h"
#include <conio.h> //librairie

//Ref: http://code-reference.com/c/conio.h/textcolor




void affich(char map[20][38], int score, int bonus, int frame, int vies){


/*NOTE : Map prend 20 de hauteur et 38 de largeur*/
    int i, j;

    system("CLS");//Clean

     textcolor(15);
     printf("Deplacez le pacman a l'aide des touches z(haut), q(gauche), s(bas) et d(droite).\nTentez d'attraper les %c pour gober les fantômes BOUHHH chance\nQuittez avec Echap\n", point);

    for(i=0; i<20; i++)
    {
        for(j=0; j<38; j++)
        {

            if(map[i][j] == 'C')//On colorie le pacman en jaune
            {
                textcolor(14);

            }
            else if(map[i][j] == 'M')   //M désigne les monstres colorié en rouge
            {
                textcolor(12);
                 if(bonus && (frame<35 || frame%3))
                {
                    textcolor(10);
                }


            }
            else if(map[i][j] == '.')//Les points sont symbolisés par la couleur blanche
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
    if(i==10){printf("        score : %d", score);}; //Points++
    if(i==12){printf("        vies : %d", vies);};   //Monstre = -1 Vie


        printf("\n");
    }


textcolor(10);
  if(bonus) //Compte a rebours pour le bonus
    {
        printf("========== BONUS ACTIVE %d ==========", 50 - frame);
    }

 textcolor(15);
Sleep(200);
}
