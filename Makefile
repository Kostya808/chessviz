src: main.o output.o
	gcc -Wall -Werror -o src output.o main.o

main.o: main.c
	gcc -Wall -Werror -c -o main.o main.c

output.o: output_board.c
	gcc -Wall -Werror -c -o output.o output_board.c


