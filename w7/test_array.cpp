#include <stdio.h>

int main() {
    int array[5];
    for(int i = 1;i <= 5;i++) {
        array[i] = i;
    }
    int a = 48763;
    for (int i = 1;i <= 5;i++) {
        printf("\n%d ", array[i]);
    }
}