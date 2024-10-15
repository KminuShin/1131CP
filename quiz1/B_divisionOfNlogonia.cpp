/*
    N
    |
    d
    |
O-d-o-d-E
    |
    d
    |
    S
*/
#include <stdio.h>

int main() {
    int cnt, ox, oy, ix, iy;
    scanf("%d", &cnt);
    while(cnt != 0) {
        scanf("%d%d", &ox, &oy);
        for(;cnt>0;cnt--) {
            scanf("%d%d", &ix, &iy);
            //printf("debug:ox %d, oy %d, ix %d, iy%d\n", ox, oy, ix, iy);
            if(ix==ox||iy==oy) {
                printf("divisa\n");
            }
            else {
                if(iy>oy) {printf("N");}
                else {printf("S");}
                if(ix>ox) {printf("E\n");}
                else {printf("O\n");}
            }
        }
        scanf("%d", &cnt);
    }
}