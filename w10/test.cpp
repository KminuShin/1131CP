#include <stdio.h>

int main() {
    int age = 19;
    int *p = &age;
    printf("\n\n%d, %d, %d\n", *p, p, age);

    int *q;
    printf("%d %d\n", q, q);
    q = &age;
    printf("%d %d\n", q, *q);
}