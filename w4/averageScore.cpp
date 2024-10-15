#include <stdio.h>

int main() {
    double gdinput = 0, gdtotal = 0;
    int gdinputcnt = -1;
    while (gdinput != -1) {
        gdtotal += gdinput;
        scanf("%lf", &gdinput);
        gdinputcnt++;
    }
    if (gdinputcnt != 0) {
        printf("%lf", gdtotal/gdinputcnt);
    } else {
        printf("No grades were entered");
    }    
}