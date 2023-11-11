/* This program takes input an integer N and an
array of N-1 natural no(s) except one. That
skipped value gets printed. */

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int temp,sum=0;
    for(int i=0;i<n-1;i++) {
        scanf("%d", &temp);
        sum+=temp;
    }
    printf("%d", (n*(n+1))/2-sum);
}