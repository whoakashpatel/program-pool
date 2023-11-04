/* Compares the unit digits of two numbers, whichever is less gets removed from respective number and the process continues until one of them is null/0. Finally the sum(remaining number tbh) is printed. */

#include <stdio.h>

int main() {
    int alpha,beta,i,j;
    scanf("%d %d", &alpha,&beta);
    for(;(alpha!=0)&&(beta!=0);) {
        i=alpha%10;
        j=beta%10;
        if(i<j) alpha/=10;
        else if(j<i) beta/=10;
        else if(i==j) {alpha/=10; beta/=10;}
        if((alpha==0)||(beta==0)) printf("%d\n",(alpha+beta));
    }
}