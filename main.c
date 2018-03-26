#include "board.h"
#include <stdlib.h>
int main()
{
	board * mass = (board *)malloc(sizeof(board)*8*8);
	output(mass);
	move(mass);
	return 0;
}
