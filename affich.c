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






void affich(char map[20][38]){

    int i, j;

    system("CLS");//efface lecran

    for(i=0; i<20; i++)
    {
        for(j=0; j<38; j++)
        {

            if(map[i][j] == 'C')
            {

            }
            else if(map[i][j] == 'M')
            {


            }
            else if(map[i][j] == '.')
            {

            }
            else if(map[i][j] == point)
            {

            }
            else
            {

            }

            printf("%c", map[i][j]); //On affiche le terrain

        }




        printf("\n");
    }






Sleep(200);
}
