#include <stdio.h>
#include "board.h"
#include <stdlib.h>
void move(board * mass){
        int i, j;
	int * index;
        char letter1, letter2;
        int number1, number2;
        int index_letter1, index_number1, index_letter2, index_number2;
        board buffer;
        printf("\n");
        printf("Формат входных данных должен быть в виде:LetterNumber-LetterNumber\n");
	printf ("Введите имя пешки, которой хотите походить и через тире место куда:");
        scanf("%c%d", &letter1, &number1);
        scanf("-%c%d", &letter2, &number2);

	index = decode(letter1, number1);
        index_letter1 = index[0];
        index_number1 = index[1];

        index = decode(letter2, number2);
        index_letter2 = index[0];
        index_number2 = index[1];
        buffer = mass[index_number1*8 + index_letter1];
        mass[index_number1*8 + index_letter1] = mass[index_number2*8 + index_letter2];
        mass[index_number2*8 + index_letter2] = buffer;

        printf ("  ABCDEFGH\n");
        printf ("  ________\n");
        for (i = 0; i < 8; i++)
        {
                printf("%d|", i+1);
                for (j = 0; j < 8; j++)
                {
                        printf("%c", mass[i*8+j].tip);
                }
                printf ("\n");
        }
}
