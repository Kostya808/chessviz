typedef struct board {
    char s[2]; //На каком столбце находится пешка
    int color; //Цвет фигуры
    char tip;
}board;

void output(board * mass);

void move (board * mass);

int * decode(char letter, int number);
