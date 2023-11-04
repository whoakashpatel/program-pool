/* Two given numbers are considered magical if the diff of two numbers with unit digit shifted to most significant digit is less than both the original numbers given the shifting happens until the shift is itself the original number */

// most probably this is correct ver just that prev ver didn't work for the last testcase.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int powerOfTen(int exp);

int main() {
    int x,y,m,n,n1,n2,count;
    scanf("%d %d", &x,&y);
    n1=x, n2=y;
    for(n=0;n1!=0;n++) n1/=10;
    for(m=0;n2!=0;m++) n2/=10;
    n1=x, n2=y;
    count=m<n?m:n;
    for(int i=0;i<(count-1);i++) {
        printf("%d %d %d\n", count,n1,n2);
        n1 = (n1%10)*powerOfTen(n-1)+(n1/10);
        n2 = (n2%10)*powerOfTen(m-1)+(n2/10);
        printf("%d %d %d\n", abs(n1-n2),n1,n2);
        if((abs(n1-n2)<=x)&&(abs(n1-n2)<=y)) {
            if(i==(count-2)) printf("true\n");
            continue;
        }
        else {printf("false\n"); break;}
    }
    return 0;
}

int powerOfTen(int exp) {
    int a=1,i=0;
    for(;i<exp;i++) a*=10;
    return a;
}