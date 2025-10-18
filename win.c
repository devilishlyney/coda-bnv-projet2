#include <stdlib.h>
#include <stdio.h>
#include "tic-tac-toe.h"

char checkWinner(char tab[3][3])
{ // Vérifie les lignes
    for (int i = 0; i < 3; i++)
    {
        if (tab[i][0] != ' ' && tab[i][0] == tab[i][1] && tab[i][0] == tab[i][2])
        {
            return tab[i][0];
        }
    }

    // Vérifie les colonnes
    for (int j = 0; j < 3; j++)
    {
        if (tab[0][j] != ' ' && tab[0][j] == tab[1][j] && tab[0][j] == tab[2][j])
        {
            return tab[0][j];
        }
    }

    // Vérifie les diagonales
    if (tab[0][0] != ' ' && tab[0][0] == tab[1][1] && tab[0][0] == tab[2][2])
    {
        return tab[0][0];
    }
    if (tab[0][2] != ' ' && tab[0][2] == tab[1][1] && tab[0][2] == tab[2][0])
    {
        return tab[0][2];
    }
    return 'n'; // Pas de gagnant
}