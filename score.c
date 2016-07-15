//  score.c
//  pacmanc
//
//  Created by  RK last MAJ 15/07/2016.
//  Copyright © 2016 RK. All rights reserved.


#include "score.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#include "subscribeScore.h"
#include "triScore.h"
#include "ReadScore.h"

void fscore(int scorePlayer)
{
    int score[100]={0}, maxi, i;
    char name[12];
    char pseudo[100][4];

    printf("Votre Pseudo (3 caracteres): ");
    //Saisie du pseudo
    do
    {
        gets(name);

    }while (strlen(name)!=3);

    //Passage en majuscule
    for (i=0 ; i<4 ; i++)
    {
        name[i]=toupper(name[i]);
    }


    printf("\n\nVotre score est: %d\n\n", scorePlayer);
    subscribeScore(name, scorePlayer);    //Inscription du score dans le fichier .txt
    maxi = ReadScore(pseudo, score);     //
    triScore(pseudo, score, maxi);
}
