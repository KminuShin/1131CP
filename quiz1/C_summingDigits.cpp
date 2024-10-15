#include <stdio.h>

int main() {
    while(true){
        int n;
        scanf("%d", &n);
        if(n==0) {break;}
        int sum=0;
        while(n>9){
            while((n/10)!=0){
                sum += n%10;
                n = n / 10;
            }
            n=sum;
        }
        printf("%n",n);
    }
}