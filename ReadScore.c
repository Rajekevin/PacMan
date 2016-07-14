#include "ReadScore.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ReadScore(char pseudo[100][4], int score[100])
{
    FILE* sauv = NULL;
    sauv = fopen("score.txt", "r");

    char lecture[5];
    int i=0;

    if (sauv != NULL)
    {
        //execution du code dans le cas o� il n'y a pas d'erreur
        fseek(sauv, 0, SEEK_SET);
        while (!feof(sauv))
        {
            fgets(lecture, 4, sauv);
            strcpy(pseudo[i], lecture); //Il faut utiliser �a pour copier des chaines de caract�re

            fseek(sauv, 1, SEEK_CUR); // On passe l'espace

            fgets(lecture, 5, sauv); //On lit le score
            score[i] = atoi(lecture); //On convertit la lecture en nombre

            i++;
        }

        fclose(sauv);
    }
    else
    {
        printf("Erreur lors de l'ouverture du fichier pour lecture");
    }

    return (i-1);
}
