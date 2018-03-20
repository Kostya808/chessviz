#include "board.h"
void output(){
	int i = 0, j;
	char whitef[8] = {'s','h','f','k','l','f','h','s'};
	char blackf[8] = {'S','H','F','L','K','F','H','S'};
	char whitep[8] = {'q','q','q','q','q','q','q','q'};
	char blackp[8] = {'p','p','p','p','p','p','p','p'};
	static board mass[8][8];
	for (j = 0; j < 8; j++)
		{
			mass[i][j].tip = whitef[j];
			mass[i+7][j].tip = blackf[j];
			mass[i+1][j].tip = whitep[j];
			mass[i+6][j].tip = blackp[j]; 
	}
	printf ("  ABCDEFGH\n");
	printf ("  ________\n");
	for (i = 0; i < 8; i++)
	{
		printf("%d|", i+1);
		for (j = 0; j < 8; j++)
		{
			printf("%c", mass[i][j].tip);
		}
		printf ("\n");
	}

}

