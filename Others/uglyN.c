// ugly n is the one whose prime factors are restricted to 2,3,5.
// Try printing the nth ugly number

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int i,nCount=0, uglyN[n];
    for(i=1;i++;) {
        if((i%2==0)||(i%3==0)||(i%5==0)) {
            uglyN[nCount]=i;
            nCount++;
            if(nCount==n) {printf("%d\n", uglyN[n-1]); break;}
        }
        else continue;
    }
}