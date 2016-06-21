//
//  main.c
//  pacmanc
//
//  Created by Elyes on 21/06/2016.
//  Copyright © 2016 Elyes. All rights reserved.
//

#include <stdio.h>

#include "structures.h"
#include "init.h"

int main(int argc, const char * argv[]) {
    char mappage[20][38];
    
    coordonees PacMan;
    coordonees ghostA;
    coordonees ghostB;
    coordonees ghostC;
    coordonees ghostD;
    
    init(mappage, &PacMan, &ghostA, &ghostB, &ghostC, &ghostD);
    return 0;
}
