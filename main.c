#include <stdio.h>
#include <stdlib.h>
#include "tic-tac-toe.h"
#include <time.h>
#include <unistd.h>

int main()
{
    // déclare les variables
    int ligne;
    int colonne;
    int choix;
    char tab[3][3];
    srand(time(NULL)); // pour le choix aléatoire de l'ordi

    //préparation du tableau
    inittab(tab);

    while (1) // boucle principale
    {
        system("clear");
        printf("\n\n\tVoici le tableau de jeu :\n");
        printtab(tab);
        printf("\t Entrez la case où vous voulez jouer. (0 à 8)\n\n");

        while (scanf("%d", &choix) != 1) // gérer les entrées non numériques
        {
            printf("un chiffre stp chef\n");
            while (getchar() != '\n');
        }

        if (choix < 0 || choix > 8) // entrées hors limites
        {
            printf("entre 0 et 8 on a dit chef\n");
            sleep(1);
            continue;
        }
        int ligne = choix / 3;
        int colonne = choix % 3;

        if (tab[ligne][colonne] != ' ') // cases déjà occupées
        {
            printf("alors non c'est déjà occupé\n");
            sleep(1);
            continue;
        }

        tab[ligne][colonne] = 'X'; // occupe la case choisie

        system("clear");
        printtab(tab);

        if (endgame(tab))
        {
            char winner = checkWinner(tab);
            printf("Partie terminée !\n");
            if (winner != 'n')
                printf("Le joueur %c a gagné!\n", winner);
            else
                printf("Match nul!\n");
            break;
        }

        sleep(1);

        int ligneIA, colonneIA;
        do 
        {
            ligneIA = rand() % 3;
            colonneIA = rand() % 3;
        } 
        while (tab[ligneIA][colonneIA] != ' ');

        tab[ligneIA][colonneIA] = 'O';

        system("clear");
        printf("Après le tour de l'ordinateur :\n");
        printtab(tab);

        if (endgame(tab))
        {
            char winner = checkWinner(tab);
            printf("Partie terminée !\n");
            if (winner != 'n')
                printf("Le joueur %c a gagné!\n", winner);
            else
                printf("Match nul!\n");
            break;
        }
    }
    exit(0);
}