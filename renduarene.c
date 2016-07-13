#include "renduarene.h"
#include "motifs.h"


//Le but de cette fonction est de remplacer les di�ses initialements g�n�r�s par des symboles plus esth�tiques

void renduarene(char terrain[20][38])
{
    int i,j;
    char betterterrain [20][38]; //On cr�e une deuxi�me ar�ne qui recevra les symboles


    //On vide les rectangles, il est imp�ratif de faire cela � part afin de ne pas impacter les autres cases
    for(i=0; i<20; i++)
    {
        for(j=0; j<38; j++)
        {

            if(terrain[i][j] == '#' && terrain[i-1][j+1] == '#' && terrain[i+1][j+1] == '#' && terrain[i+1][j-1] == '#' && terrain[i-1][j-1] == '#')
            {
                terrain[i][j] = ' ';
                betterterrain[i][j] = ' ';
            }

        }
    }


    for(i=0; i<20; i++)
    {
        for(j=0; j<38; j++)
        {

            switch(terrain[i][j])
            {
            case '#':


                /* on verifie pour la case courante ce qu'il y a �:
                         en haut                    � droite              en bas                       � gauche
                puis en fonction de �a, on remplace par le symbole correspondant*/

                if(terrain[i-1][j] != '#' && terrain[i][j+1] == '#' && terrain[i+1][j] == '#' &&  terrain[i][j-1] != '#')
                {
                    betterterrain[i][j] = coin_hg;
                }

                if(terrain[i-1][j] != '#' && terrain[i][j+1] != '#' && terrain[i+1][j] == '#' &&  terrain[i][j-1] == '#')
                {
                    betterterrain[i][j] = coin_hd;
                }

                if(terrain[i-1][j] == '#' && terrain[i][j+1] == '#' && terrain[i+1][j] != '#' &&  terrain[i][j-1] != '#')
                {
                    betterterrain[i][j] = coin_bg;
                }

                if(terrain[i-1][j] == '#' && terrain[i][j+1] != '#' && terrain[i+1][j] != '#' &&  terrain[i][j-1] == '#')
                {
                    betterterrain[i][j] = coin_bd;
                }

                if(terrain[i-1][j] != '#' && terrain[i][j+1] == '#' && terrain[i+1][j] != '#' &&  terrain[i][j-1] == '#')
                {
                    betterterrain[i][j] = bar_hor;
                }

                if(terrain[i-1][j] == '#' && terrain[i][j+1] != '#' && terrain[i+1][j] == '#' &&  terrain[i][j-1] != '#')
                {
                    betterterrain[i][j] = bar_ver;
                }

                if(terrain[i-1][j] == '#' && terrain[i][j+1] != '#' && terrain[i+1][j] == '#' &&  terrain[i][j-1] == '#')
                {
                    betterterrain[i][j] = t_gau;
                }

                if(terrain[i-1][j] == '#' && terrain[i][j+1] == '#' && terrain[i+1][j] != '#' &&  terrain[i][j-1] == '#')
                {
                    betterterrain[i][j] = t_hau;
                }

                if(terrain[i-1][j] != '#' && terrain[i][j+1] == '#' && terrain[i+1][j] == '#' &&  terrain[i][j-1] == '#')
                {
                    betterterrain[i][j] = t_bas;
                }
                if(terrain[i-1][j] == '#' && terrain[i][j+1] == '#' && terrain[i+1][j] == '#' &&  terrain[i][j-1] != '#')
                {
                    betterterrain[i][j] = t_dro;
                }
                if(terrain[i-1][j] == '#' && terrain[i][j+1] == '#' && terrain[i+1][j] == '#' &&  terrain[i][j-1] == '#')
                {
                    betterterrain[i][j] = croix;
                }

                //Les bouts de lignes cela sert aux cases qui se trouvent � la fin d'une ligne
                if(terrain[i-1][j] != '#' && terrain[i][j+1] != '#' && terrain[i+1][j] != '#' &&  terrain[i][j-1] == '#')
                {
                    betterterrain[i][j] = bar_hor;
                }
                if(terrain[i-1][j] != '#' && terrain[i][j+1] == '#' && terrain[i+1][j] != '#' &&  terrain[i][j-1] != '#')
                {
                    betterterrain[i][j] = bar_hor;
                }
                if(terrain[i-1][j] != '#' && terrain[i][j+1] != '#' && terrain[i+1][j] == '#' &&  terrain[i][j-1] != '#')
                {
                    betterterrain[i][j] = bar_ver;
                }
                if(terrain[i-1][j] == '#' && terrain[i][j+1] != '#' && terrain[i+1][j] != '#' &&  terrain[i][j-1] != '#')
                {
                    betterterrain[i][j] = bar_ver;
                }

                break;

                //Si la case s�lectionn�e n'est pas un di�se, on ne fait rien

            case '.':

                   betterterrain[i][j] = '.';
                   break;


            case 'C':

                    betterterrain[i][j] = 'C';
                    break;


            case 'M':

                    betterterrain[i][j] = 'M';
                    break;

            case 'B':

                    betterterrain[i][j] = point;
                    break;

            }

            /*Ces test servent � corriger un bug qui fait que quand on arrive
              � la derni�re case d'une ligne d'un tableau et que l'on veut
              lire la case suivante (qui ne devrait pas exister en th�orie)
              le programme lit la premi�re case de la ligne suivante*/

            if((j == 0 || j == 37) && (i != 0 && i != 19))
            {
                betterterrain[i][j] = bar_ver;
            }
            if(j == 0 && i == 19)
            {
                betterterrain[i][j] = coin_bg;
            }
            if(j == 37 && i == 0)
            {
                betterterrain[i][j] = coin_hd;
            }
            if(j == 0 && (i == 6 || i == 7 || i == 9 || i == 11 || i == 15))
            {
                betterterrain[i][j] = t_dro;
            }
            if(j == 37 && (i == 6 || i == 7 || i == 9 || i == 11 || i == 13 || i == 15))
            {
                betterterrain[i][j] = t_gau;
            }

        }
    }

    //On remplace ensuite par le nouveau terrain, on ne peut pas le mettre dans la premi�re boucle car cela fausserai les calculs.
    for(i=0; i<20; i++)
    {
        for(j=0; j<38; j++)
        {

            terrain[i][j] = betterterrain[i][j];

        }
    }

}
