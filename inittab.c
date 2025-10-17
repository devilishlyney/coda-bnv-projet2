#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "tic-tac-toe.h"

void inittab(char tab[2][2])
{
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            tab[i][j] = ' ';
        }
    }
}