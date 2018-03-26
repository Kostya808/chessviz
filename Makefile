src: main.o output.o move.o decode.o
	gcc -Wall -Werror -o src decode.o move.o output.o main.o

main.o: main.c
	gcc -Wall -Werror -c -o main.o main.c

output.o: output_board.c
	gcc -Wall -Werror -c -o output.o output_board.c

move.o: move.c
	gcc -Wall -Werror -c -o move.o move.c

decode.o: decode.c
	gcc -Wall -Werror -c -o decode.o decode.c
