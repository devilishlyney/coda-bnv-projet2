#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "tic-tac-toe.h"

void printtab(char tab[3][3])
{
    // de https://www.geeksforgeeks.org/c/tic-tac-toe-game-in-c/ juste pour la mise en forme du tableau
    printf("\n\n");
    printf("\t\t\t %c | %c | %c \n", tab[0][0],
           tab[0][1], tab[0][2]); // première ligne
    printf("\t\t\t-----------\n");
    printf("\t\t\t %c | %c | %c \n", tab[1][0],
           tab[1][1], tab[1][2]); // deuxième ligne
    printf("\t\t\t-----------\n");
    printf("\t\t\t %c | %c | %c \n\n", tab[2][0],
           tab[2][1], tab[2][2]); // troisième ligne
}