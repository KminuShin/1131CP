#include <stdio.h>

int main() {
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            printf("%dx%d=%2d ", i+1, j+1, (i+1)*(j+1));
        }
        printf("\n");
    }
}