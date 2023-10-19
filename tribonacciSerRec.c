#include <stdio.h>

int tribS(int i);

int main() {
    int t,n;
    scanf("%d", &t);
    for(int i=0;i<t;i++) {
        scanf("%d", &n);
        if(n<0) printf("Tribonacci is undefined.\n");
        else {
            for(i=0;i<=n;i++) {
                printf("%d ", tribS(i));
                } printf("\n");
            }
    }
}

int tribS(int i) {
    if(i==0||i==1) return i;
    else if(i==2) return 1;
    else return tribS(i-1)+tribS(i-2)+tribS(i-3);
}