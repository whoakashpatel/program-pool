#include <stdio.h>

int fibS(int i);

int main() {
    int t,n;
    scanf("%d", &t);
    for(int i=0;i<t;i++) {
        scanf("%d", &n);
        if(n<0) printf("Fibonacci is undefined.\n");
        else {
            for(i=0;i<=n;i++) {
                printf("%d ", fibS(i));
                } printf("\n");
            }
    }
}

int fibS(int i) {
    if(i==0||i==1) return i;
    else return fibS(i-1)+fibS(i-2);
}