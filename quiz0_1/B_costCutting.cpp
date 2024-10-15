#include <stdio.h>

int main() {
    int t, e1, e2, e3, cnt, high, low;
    //int arr[3];
    scanf("%d", &t);
    int ini_t = t;
    while(t>0) {
        cnt = 3;
        high = 1000;
        low = 10000;
        scanf("%d%d%d", &e1, &e2, &e3);
        if(e1 > high) {
            high = e1;
        }
        if(e2 > high) {
            high = e2;
        }
        if(e3 > high) {
            high = e3;
        }
        if(e1 < low) {
            low = e1;
        }
        if(e2 < low) {
            low = e2;
        }
        if(e3 < low) {
            low = e3;
        }
        //printf("%d %d %d %d %d %d %d\n", e1, e2, e3, high, low, ini_t+1-t, e1+e2+e3-high-low);
        printf("Case %d: %d\n", ini_t+1-t, e1+e2+e3-high-low);
        t -= 1;
    }
}