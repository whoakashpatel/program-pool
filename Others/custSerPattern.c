/*
This program prints the given pattern - 
  1
 121
12321
... upto n lines
*/

#include <stdio.h>

int main() {
    int t;
	scanf("%d", &t);
	for(int i=0;i<t;i++) {
        int n,m;
        scanf("%d", &n);
        m=2*n-2; // var for init no of spaces
        printf("%d\n", m);
        // loop for line count
        for(int i=0;i<n;i++) {
            // loop for indentation
            for(int k=m;k>0;k--) printf(" ");
            m-=2;
            // loop for pattern
            for(int j=0;j<2*i+1;j++) {
                if(j<=i) printf("%d ", j+1);
                else printf("%d ", 2*i+1-j);
            } printf("\n");
        }
	}
}