#include <stdio.h>

int main() {
    int cnt, cnto, n1, n2, n, sum;
    scanf("%d", &cnt);
    cnto = cnt;
    for (;cnt>0;cnt--) {
        scanf("%d%d", &n1, &n2);
        sum = 0;
        n = n1;
        while (n <= n2)
        {
            if(n%2 != 0) {sum += n;}
            n += 1;
        }
        printf("Case %d: %d\n", cnto-cnt+1, sum);
    }
}