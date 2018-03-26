#include <stdio.h>
int * decode(char letter, int number){
	int i, index_letter;
static int index[2];
	char abc[8] = {'A','B','C','D','E','F','G','H'};
	for (i = 0; i < 8; i++)
		if(letter == abc[i])
			index_letter = i;
	index[0] = index_letter;
	index[1] = number - 1;
	return index;
}
