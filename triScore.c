//  triScore.c
//  pacmanc
//
//  Created by  RK last MAJ 15/07/2016.
//  Copyright � 2016 RK. All rights reserved.



#include "triScore.h"
#include <string.h>
#include "BestScore.h"
#include "cleanScore.h"


void triScore(char pseudo[100][4], int score[100], int maxi)
{
    int i, j, new_score;
    char new_pseudo[4];
    for (i = 1; i < maxi; i++)      // tri score du plus petit au plus grand
    {
        new_score = score[i];
        strcpy(new_pseudo, pseudo[i]);
        j=i;
        while (j > 0 && score[j-1] > new_score)
        {
            score[j] = score[j-1];
            strcpy(pseudo[j], pseudo[j-1]);
            j--;
        }
        score[j] = new_score;
        strcpy(pseudo[j], new_pseudo);
    }


    //Affichage tableau des scores
    BestScore(pseudo, score, maxi);

    //Suppression lorsque fichier trop gros
    if (maxi>50)
    {
        cleanScore(pseudo, score, maxi);
    }
}
