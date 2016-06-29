//
//  init.c
//  pacmanc
//
//  Created by Elyes on 21/06/2016.
//  Copyright © 2016 Elyes. All rights reserved.
//

#include "init.h"
#include "structures.h"

void init(char mappage[20][38], coordonees* PacMan, coordonees* ghostA, coordonees* ghostB, coordonees* ghostC, coordonees* ghostD){
    int i, j;

    for(i=0; i<20; i++){
        for(j=0; j<38; j++){
            mappage[i][j] = '.'; // On rempli la map de point

            if(i == 0 || j == 0 || i == 19 || j == 37){ // On place des murs (#) sur les contours
                mappage[i][j] = '#';
            }

            if(i < 5 && j == 18) // Barre au milieu en haut
            {
                mappage[i][j] = '#';
            }

            // Rectangles premiere ligne
            if(i > 1 && j > 1 && i < 5 && j < 8) // Premier rectangle en haut a gauche
            {
                mappage[i][j] = '#';
            }

            if(i > 1 && j > 8 && i < 5 && j < 17) // Deuxieme rectangle en haut en partant de la gauche
            {
                mappage[i][j] = '#';
            }

            if(i > 1 && j > 19 && i < 5 && j < 28) // Rectangle à droite de la barre du milieu en haut
            {
                mappage[i][j] = '#';
            }

            if(i > 1 && j > 28 && i < 5 && j < 36) // Rectangles en haut a droite
            {
                mappage[i][j] = '#';
            }

            // Rectangles deuxieme ligne

            if(i > 5 && j > 0 && i < 8 && j < 8) // Collé à gauche
            {
                mappage[i][j] = '#';
            }


            if(i > 5 && j > 28 && i < 8 && j <= 37) // Collé à droite
            {
                mappage[i][j] = '#';
            }

            // Rectangles troisieme ligne

            if(i > 8 && j >= 0 && i < 12 && j < 8) // Collé à gauche
            {
                mappage[i][j] = '#';
            }

            if(i > 8 && j > 28 && i < 12 && j < 37) // Collé à droite
            {
                mappage[i][j] = '#';
            }

            // Base des fantomes

            if(i > 11 && j > 13 && i < 15 && j < 23)
            {
                mappage[i][j] = '#';
            }

            // On vide le rectangle des fantomes et on laisse deux entrées

            if(i == 13 && j > 14 && j < 22)
            {
                mappage[i][j] = '.';
            }

            if((i == 14 && j == 17) || (i == 14 && j == 19)) // On place les deux entrées en bas du rectangle
            {
                mappage[i][j] = '.';
            }

            // Rectangles quatrième ligne

            if(i > 11 && j > 10 && i < 14 && j < 13) // A gauche de la base des fantomes
            {
                mappage[i][j] = '#';
            }

            if(i > 11 && j > 23 && i < 14 && j < 26) // A droite de la base des fantomes
            {
                mappage[i][j] = '#';
            }

            // Rectangles en bas au milieu

            if(i > 15 && j > 13 && i < 18 && j < 23)
            {
                mappage[i][j] = '#';
            }

            // Rectangles du bas

            if(i > 16 && j > 1 && i < 19 && j < 13) // En bas a gauche
            {
                mappage[i][j] = '#';
            }
            if(i > 16 && j > 23 && i < 19 && j < 36) // En bas a droite
            {
                mappage[i][j] = '#';
            }


            // Rectangles terminés, les lignes :

            if((i == 6 || i == 10) && j > 10 && j < 26) // Deux barres horizontale au milieu
            {
                mappage[i][j] = '#';
            }

            if(i > 6 && i < 10 && j == 18) // Barre verticale au milieu : double T
            {
                mappage[i][j] = '#';
            }

            if(i > 5 && i < 10 && (j == 9 || j == 27)) // 2 barres verticales a gauche et a droite du double T
            {
                mappage[i][j] = '#';
            }

            if(i == 8 && ((j > 8 && j < 17) || (j > 19 && j < 28))) // 2 barres horizontal qui viennent compléter le double T
            {
                mappage[i][j] = '#';
            }

            // Barres verticales ... J'allais pas tout commenter non plus hein :D

            if(i > 10 && i < 14 && (j == 9 || j == 27))
            {

                mappage[i][j] = '#';

            }

            if(i > 12 && i < 16 && j == 5)
            {

                mappage[i][j] = '#';

            }

            if(i > 14 && i < 18 && (j == 7 || j == 30))
            {

                mappage[i][j] = '#';

            }

            // Barres horizontales
            if(i == 13 && ((j > 1 && j < 6) || (j > 6 && j < 10) || (j > 28 && j < 37)))
            {

                mappage[i][j] = '#';

            }

            if(i == 15 && ((j > 0 && j < 4) || (j > 6 && j < 13) || (j > 23 && j < 31) || (j > 31 && j < 37)))
            {

                mappage[i][j] = '#';

            }
        }
    }

    // Pacman

    mappage[1][1] = 'C';
    PacMan->i = 1;
    PacMan->j = 1;

    //Initialisation des fantomes

    mappage[13][15] = 'F';
    ghostA->i = 13;
    ghostA->j = 15;

    mappage[13][17] = 'F';
    ghostB->i = 13;
    ghostB->j = 17;

    mappage[13][19] = 'F';
    ghostC->i = 13;
    ghostC->j = 19;

    mappage[13][21] = 'F';
    ghostD->i = 13;
    ghostD->j = 21;

    // Bonus
    mappage[18][1] = 'B';
    mappage[1][36] = 'B';
}
