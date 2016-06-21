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