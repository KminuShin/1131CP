#include <stdio.h>

int main() {
    double gdtotal = 0;
    int gdinput = 0, gdinputcnt = 0;
    scanf("%d", &gdinput);
    int gdmax = gdinput, gdmin = gdinput;
    while (gdinput != -1) {
        gdtotal += gdinput;
        printf("input: %d max:%d min:%d total:%lf\n", gdinput, gdmax, gdmin, gdtotal);
        scanf("%d", &gdinput);
        if(gdinput > gdmax) {gdmax = gdinput;}
        else if (gdinput < gdmin) {gdmin = gdinput;}
        gdinputcnt++;
    }
    if (gdinputcnt != 0) {
        printf("%lf", gdtotal/gdinputcnt);
    } else {
        printf("No grades were entered");
    }    
}