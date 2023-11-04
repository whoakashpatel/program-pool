#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void calc_max(int n, int k);

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    calc_max(n, k);
    return 0;
}

void calc_max(int n, int k) {
    int bitAND, bitOR, bitXOR;
    int a=0,b=0,c=0;
    for(int i=1;i<n;i++) {
        for(int j=(i+1);j<=n;j++) {
            bitAND = i&j;
            bitOR = i|j;
            bitXOR = i^j;
            printf("%d %d %d %d %d\n", i,j,bitAND,bitOR,bitXOR);
            if((bitAND>=a)&&(bitAND<k)) a=bitAND;
            if((bitOR>=b)&&(bitOR<k)) b=bitOR;
            if((bitXOR>=c)&&(bitXOR<k)) c=bitXOR;
        } 
    }
    printf("%d\n%d\n%d", a,b,c);
}