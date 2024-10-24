#include <stdio.h>

int main() {
    // chara x, y
    int cx, cy;
    cx = 0;
    cy = 0;

    // input x, y
    int ix, iy;
    int sqrtx, sqrty;
    while (true) {
        sqrtx = 0;
        sqrty = 0;
        scanf("%d%d", &ix, &iy);
        if(ix==0&&iy==0) {
            break;
        }

        // check sqrt, btw how
        for (int i = 0;i < (ix+cx);i++) {
            if ((i+1)==((ix+cx)/(i+1))&&(ix+cx)%(i+1)==0) {
                sqrtx = 1;
            }
        }

        for (int i = 0;i < (iy+cy);i++) {
            if ((i+1)==((iy+cy)/(i+1))&&(iy+cy)%(i+1)==0) {
                sqrty = 1;
            }
        }

        if ((sqrtx==1)&&(sqrty==1)) {
            continue;
        }

        // move
        cx += ix;
        cy += iy;
    }

    printf("%d %d", cx, cy);
}
