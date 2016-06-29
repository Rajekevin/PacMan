//
//  affich.c
//  pacmanc
//
//  Created by Elyes on 21/06/2016.
//  Copyright © 2016 Elyes. All rights reserved.
//

#include "affich.h"

void affich(char map[20][38]){
    int i, j;

    for(i=0; i<20; i++)
    {
        for(j=0; j<38; j++)
        {
            printf("%c", map[i][j]); //On affiche le terrain
        }
    }
}
