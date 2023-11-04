#include <stdio.h>

int fact(int n);

int main() {
    int n;
    scanf("%d", &n);
    if(n<0) {printf("Factorial is undefined.\n"); return 0;}
    printf("Factorial of the input is: %d.\n", fact(n));
}

int fact(int n) {
    if(n==0||n==1) return 1;
    else return n*fact(n-1);
}