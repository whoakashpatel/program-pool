// Calculates the sum of series - 1+11+111+1111+...n terms

#include <stdio.h>

int powerOfTen(int exp);

int main() {
    int n,m,sum=0;
    scanf("%d", &n);
    for(int i=1;i<=n;i++) {
        m=0;
        for(int j=0;j<i;j++) {
            m+=powerOfTen(j);
        }
        sum+=m;
    }
    printf("%d\n", sum);
}

int powerOfTen(int exp) {
    int a=1;
    for(int j=0;j<exp;j++) a*=10;
    return a;
}