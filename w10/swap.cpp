#include <stdio.h>

void swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int numa = 10, numb = 20;
    int *a = &numa, *b = &numb;

    printf("%d, %d\n", *a, *b);
    swap(a, b);
    printf("%d, %d\n", *a, *b);
    swap(&numa, &numb);
    printf("%d, %d\n", numa, numb);
}