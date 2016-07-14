#include <stdlib.h>
#include <math.h>
#include <time.h>

#include "ia.h"
#include "structures.h"


int ia(coordonees pacman, coordonees fantome, char terrain[20][38], int olDirection)
{
    int direction=0; // on a 1=Bas, 2=Gauche, 3=Haut, 4=Droite
    srand(time(NULL));

    if (olDirection != 1 && (terrain[fantome.i-1][fantome.j]==' ' || terrain[fantome.i-1][fantome.j]=='.'))         //libre haut
    {
        if (olDirection != 4 && (terrain[fantome.i][fantome.j-1]==' ' || terrain[fantome.i][fantome.j-1]=='.'))          //libre � haut,gauche
        {
            if (terrain[fantome.i+1][fantome.j]==' ' || terrain[fantome.i+1][fantome.j]=='.')                                //libre haut,gauche,bas
            {

                if (pacman.i-fantome.i<=0) //SI pacman en haut
                {
                    if (pacman.j-fantome.j<=0) //SI pacman � gauche
                    {
                        //le pacman se trouve en haut � gauche du fant�me
                        if (pacman.i-fantome.i==0)//test pour savoir si le pacman est sur la m�me ligne que le fant�me
                        {
                            direction = 2;
                        }
                        else if (pacman.j-fantome.j==0)
                        {
                            direction = 3;
                        }
                        else
                        {
                            direction = rand()%2+2;
                        }
                    }
                    else
                    {
                        direction = 3;
                    }
                }
                else //SI pacman en bas
                {
                    if (pacman.j-fantome.j<=0) //SI pacman � gauche
                    {
                        //le pacman ce trouve en bas � gauche du fant�me
                        if (pacman.i-fantome.i==0)
                        {
                            direction = 2;
                        }
                        else if (pacman.j-fantome.j==0)
                        {
                            direction = 3;
                        }
                        else
                        {
                            direction = rand()%2+1;
                        }
                    }
                    else
                    {
                        direction = 1;
                    }
                }

            }
            else if (terrain[fantome.i][fantome.j+1]==' ' || terrain[fantome.i][fantome.j+1]=='.')   //libre � haut,gauche,droite
            {
                if (pacman.i-fantome.i<=0) //SI pacman en haut
                {
                    if (pacman.j-fantome.j>=0) //SI pacman � droite
                    {
                        //le pacman ce trouve en haut � droite du fant�me
                        if (pacman.i-fantome.i==0) //SI pacman sur m�me ligne
                        {
                            direction = 4;
                        }
                        else if (pacman.j-fantome.j==0)//SI pacman sur m�me colonne
                        {
                            direction = 3;
                        }
                        else
                        {
                            direction = rand()%2+3;
                        }
                    }
                    else if (pacman.j-fantome.j<=0) //SI pacman � gauche
                    {
                        direction = 2;
                    }
                    else
                    {
                        direction = 3;
                    }
                }
            }
            else
            {
                direction = rand()%2+2;
            }
        }
        else if (olDirection != 2 && (terrain[fantome.i][fantome.j+1]==' ' || terrain[fantome.i][fantome.j+1]=='.'))          //libre � haut, droite
        {
            if (terrain[fantome.i+1][fantome.j]==' ' || terrain[fantome.i+1][fantome.j]=='.')              //libre haut,droite,bas
            {
                // A VOIR
                if (pacman.i-fantome.i<=0) //SI pacman en haut
                {
                    if (pacman.j-fantome.j>=0) //SI pacman � droite
                    {
                        //le pacman ce trouve en haut � droite du fant�me
                        if (pacman.i-fantome.i==0) //SI pacman sur m�me ligne
                        {
                            direction = 4;
                        }
                        else if (pacman.j-fantome.j==0)//SI pacman sur m�me colonne
                        {
                            direction = 1;
                        }
                        else
                        {
                            direction = rand()%2+3;
                        }
                    }
                    else
                    {
                        direction = 3;
                    }
                }
                else //SI pacman en bas
                {
                    if (pacman.j-fantome.j>=0) //SI pacman � droite
                    {
                        //le pacman ce trouve en bas � droite du fant�me
                        if (pacman.i-fantome.i==0)
                        {
                            direction = 4;
                        }
                        else if (pacman.j-fantome.j==0)
                        {
                            direction = 1;
                        }
                        else
                        {
                            if (rand()%2==0)
                            {
                                direction = 1;
                            }
                            else
                            {
                                direction = 4;
                            }
                        }
                    }
                    else
                    {
                        direction = 1;
                    }
                }

            }
            else if (terrain[fantome.i][fantome.j+1]==' ' || terrain[fantome.i][fantome.j+1]=='.')   //libre � haut,droite, gauche
            {
                if (pacman.i-fantome.i<=0) //SI pacman en haut
                {
                    if (pacman.j-fantome.j>=0) //SI pacman � droite
                    {
                        //le pacman ce trouve en haut � droite du fant�me
                        if (pacman.i-fantome.i==0) //SI pacman sur m�me ligne
                        {
                            direction = 4;
                        }
                        else if (pacman.j-fantome.j==0)//SI pacman sur m�me colonne
                        {
                            direction = 3;
                        }
                        else
                        {
                            direction = rand()%2+3;
                        }
                    }
                    else
                    {
                        direction = 2;
                    }
                }
            }

        }
        else if (olDirection != 3 && (terrain[fantome.i+1][fantome.j]==' ' || terrain[fantome.i+1][fantome.j]=='.')) //libre en haut, bas
        {
            if (pacman.i-fantome.i<=0)
            {
                direction = 3;
            }
            else
            {
                direction = 1;
            }
        }
        else
        {
            direction = 3;
        }

    }//FIN LIBRE HAUT
    else if (olDirection != 3 && (terrain[fantome.i+1][fantome.j]==' ' || terrain[fantome.i+1][fantome.j]=='.'))      //libre bas
    {
        if (olDirection != 4 && (terrain[fantome.i][fantome.j-1]==' ' || terrain[fantome.i][fantome.j-1]=='.')) //libre bas, gauche
        {
            if (terrain[fantome.i][fantome.j+1]==' ' || terrain[fantome.i][fantome.j+1]=='.') //libre bas, gauche, droite
            {
                //A VOIR
                if (pacman.i-fantome.i>=0) //SI pacman en bas
                {
                    if (pacman.j-fantome.j<=0) //SI pacman � gauche
                    {
                       //pacman en bas � gauche
                       if (pacman.i-fantome.i==0) //SI pacman sur m�me ligne
                        {
                            direction = 2;
                        }
                        else if (pacman.j-fantome.j==0)//SI pacman sur m�me colonne
                        {
                            direction = 1;
                        }
                        else
                        {
                            direction = rand()%2+1;
                        }
                    }
                    else
                    {
                        //pacman en bas � droite
                        if (pacman.i-fantome.i==0) //SI pacman sur m�me ligne
                        {
                            direction = 4;
                        }
                        else if (pacman.j-fantome.j==0)//SI pacman sur m�me colonne
                        {
                            direction = 1;
                        }
                        else
                        {
                            if (rand()%2==0)
                            {
                                direction = 1;
                            }
                            else
                            {
                                direction = 4;
                            }
                        }
                    }
                }
            }
        }
        else
        {
            direction = 1;
        }

    }//FIN LIBRE BAS
    else if (olDirection != 4 && (terrain[fantome.i][fantome.j-1]==' ' || terrain[fantome.i][fantome.j-1]=='.'))      //Libre gauche
    {
        if (terrain[fantome.i][fantome.j+1]==' ' || terrain[fantome.i][fantome.j+1]=='.')   //Libre gauche, droite
        {
            if (pacman.j-fantome.j<=0) //SI pacman � gauche
            {
                direction = 2;
            }
            else //SI Pacman � droite
            {
                direction = 4;
            }
        }
        else
        {
            direction = 2;
        }

    }
    else if (olDirection != 2 && (terrain[fantome.i][fantome.j+1]==' ' || terrain[fantome.i][fantome.j+1]=='.'))        //Libre droite
    {
        direction = 4;
    }
    else
    {
        direction = rand()%4+1;
    }

    return direction;
}
