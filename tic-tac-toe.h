#ifndef __TIC_TAC_TOE_H__
#define __TIC_TAC_TOE_H__
void inittab(char tab[3][3]);
void printtab(char tab[3][3]);
int endgame(char tab[3][3]);
char checkWinner(char tab[3][3]);
#endif