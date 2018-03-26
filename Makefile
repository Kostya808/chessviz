src: main.o output.o move.o decode.o test_d.o
	gcc -Wall -Werror -o src test_d.o decode.o move.o output.o main.o

main.o: main.c
	gcc -Wall -Werror -c -o main.o main.c

output.o: output_board.c
	gcc -Wall -Werror -c -o output.o output_board.c

move.o: move.c
	gcc -Wall -Werror -c -o move.o move.c

decode.o: decode.c
	gcc -Wall -Werror -c -o decode.o decode.c

test_d.o: test_d.c
	gcc -Wall -Werror -c -o test_d.o test_d.c