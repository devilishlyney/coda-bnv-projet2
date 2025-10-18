#include <stdlib.h>
#include <stdio.h>
#include "tic-tac-toe.h"

int endgame(char tab[3][3])

{
    // Vérifie les lignes et les colonnes
    for (int i = 0; i < 3; i++)
    {
    if (tab[i][0] == tab[i][1] && tab[i][1] == tab[i][2] && tab[i][0] != ' ')
        return 1;
    if (tab[0][i] == tab[1][i] && tab[1][i] == tab[2][i] && tab[0][i] != ' ')
        return 1;
    }

    // Vérifie les diagonales
    if (tab[0][0] == tab[1][1] && tab[1][1] == tab[2][2] && tab[0][0] != ' ')
        return 1;
    if (tab[0][2] == tab[1][1] && tab[1][1] == tab[2][0] && tab[0][2] != ' ')
        return 1;

    return 0;

}
