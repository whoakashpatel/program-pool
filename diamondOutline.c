#include <stdio.h>

int main() {
    int n,i,j;
    scanf("%d", &n);
    for(i=0;i<n;i++) {
        for(j=n;j>i+1;j--) printf(" ");
        for(j=0;j<=i;j++) {
            if(j==0||j==i) printf("* ");
            else printf("  ");
        }
        printf("\n");
    }
    for(;i>1;i--) {
        for(j=n;j>i-1;j--) printf(" ");
        for(j=0;j<=i-2;j++) {
            if(j==0||j==i-2) printf("* ");
            else printf("  ");
        }
        printf("\n");
    }
}