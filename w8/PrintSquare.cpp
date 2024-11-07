#include <stdio.h>

void PrintStar(int col) {
    for(int i=0;i < col;i++) {
        printf("*");
    }
    printf("\n");
}

void PrintSquare(int row, int col) {
    for(int i=0;i < row;i++) {
        PrintStar(col);
    }
}

int main() {
    int row, col;
    scanf("%d%d", &row, &col);

    PrintSquare(row, col);
}

/*
row -> 行(值)
column -> 列(恆)
row = 4, col = 6;
******
******
******
******
*/