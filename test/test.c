#include <ctest.h>
#include <board.h>
#include <stdlib.h>

CTEST(test_move, move_pawn) // Проверка на возможность атаки на свои же фигуры
{
	//GIVEN
	board * mass = (board *)malloc(sizeof(board)*8*8);
	output(mass);
	
	//WHEN
	const int n1 = 0, l1 = 0, n2 = 1, l2 = 0;
	int check = move_checking(mass, n1, l1, n2, l2); 
	
	//THEN
	const int expected = 0;

	ASSERT_EQUAL(expected, check);
}