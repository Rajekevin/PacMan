#include "BestScore.h"

#include <stdio.h>
#include <conio.h>

void BestScore(char pseudo[100][4], int score[100], int maxi)
{
    int i=1;

    printf("   MEILLEURS SCORES\n\n");
    printf("\nPseudo\t|\tScore\n");
    printf("----------------------\n");

    while (i<=maxi && i<11)
    {
        printf("%s\t|\t%d\n", pseudo[maxi-i], score[maxi-i]); //parcours du tableau à l'envers
        i++;
    }

    printf("\n");
    getch();

}
