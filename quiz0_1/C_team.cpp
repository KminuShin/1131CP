#include <stdio.h>

int main() {
    int lines;
    scanf("%d", &lines);

    int n1, n2, n3, count=0;
    while(lines) {
        scanf("%d%d%d", &n1, &n2, &n3);
        if((n1+n2+n3)>1) {count++;}
        lines--;
    }
    printf("%d", count);
}