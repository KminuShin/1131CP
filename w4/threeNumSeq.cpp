#include <stdio.h>

int main() {
    for(int i=1;i<=10;i++) {printf("%d ", i);}
    printf("\n");
    for(int i=3;i<=30;i+=3) {printf("%d ", i);}
    printf("\n");
    int sum=0;
    for(int i=0;sum+i<=55;i+=1) {
        sum = sum + i;
        printf("%d ", sum);
    }
    printf("\n");
}