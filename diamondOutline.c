#include <stdio.h>

int main() {
    int n,i,j;
    scanf("%d", &n);
    // for upper part of the diamond
    for(i=0;i<n;i++) {
        // for indentation
        for(j=n;j>i+1;j--) printf(" ");
        // for count and print
        for(j=0;j<=i;j++) {
            if(j==0||j==i) printf("* ");
            else printf("  ");
        }
        printf("\n");
    }
    // for inverted part of the diamond
    for(;i>1;i--) {
        // for indentation
        for(j=n;j>i-1;j--) printf(" ");
        // for count and print
        for(j=0;j<=i-2;j++) {
            if(j==0||j==i-2) printf("* ");
            else printf("  ");
        }
        printf("\n");
    }
}
