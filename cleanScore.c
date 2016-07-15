//  cleanScore.c
//  pacmanc
//
//  Created by  RK last MAJ 15/07/2016.
//  Copyright © 2016 RK. All rights reserved.


#include "cleanScore.h"

#include <stdlib.h>
#include <stdio.h>

void cleanScore(char pseudo[100][4], int score[100], int maxi)
{
    int i=0;
    FILE* fichier = NULL;               //On crée un pointeur File
    fichier = fopen("score.txt","w+");  //On ouvre le fichier score.txt

    if (fichier !=NULL)
    {
        for (i=maxi-1; i>maxi-11; i--)
        {
            fprintf(fichier, "%s %d\n", pseudo[i], score[i]);  //Enregistrement du score
        }
        fclose(fichier);
    }
    else
    {   //sinon renvoie un message d'erreur
        printf("Erreur lors de l'ouverture/suppression du contenu du fichier score\n");
    }
}
