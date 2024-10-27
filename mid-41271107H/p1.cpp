#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    for(int i=0;i < num/2+1;i++) {
        // convert num to i+-*/ or sth
        // 0,1,2,3,4 to 1,3,5,7,9
        // num -> (i*2+1)
        for(int j=0;j < (i*2+1)/2+1;j++) { // 0,1,2,3,4 row
            // 4,3,2,1,0 spaces
            for(int k=0;k < num/2-j;k++) {
                printf(" ");
            }

            // 1,333,55555, ... count
            for(int k=0;k < j*2+1;k++) { // 0>1 1>3 2>5
                printf("%d", j*2+1);
            }

            printf("\n");
        }
    }
    
    
    /*
    input:9
    output:
        1       i0 s4 c1 n9
       333      i1 s3 c3 n9
      55555     i2 s2 c5 n9
     7777777    i3 s1 c7 n9
    999999999   i4 s0 c9 n9

    rows: num/2+1
    space: rows-i+1
    count: (i+1)*2-1
    */

    /*
    int num;
    scanf("%d", &num);
    printf("%d", num);
    for (int i = 0;i < num/2+1;i++) {

        // to fix:
        // replace following num with i

        for (int j = 0;j < i/2+1;j++) {

            // print space
            for (int k = 0;k < i/2+1-j;k++) {
                printf(" ");
            }

            //print num
            for (int k = 0;k < j*2-1;k++) {
                printf("%d", j*2-1);
            }

            
        }
        printf("\n");

    }
    */
}
