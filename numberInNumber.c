// Checks if the number b is contained in a or not

#include <stdio.h>

int main() {
    int a,b,m,n,count=0,i,j;
    scanf("%d %d", &a,&b);
    n=b;
    for(;n!=0;count++) n/=10;
    if(a<b) printf("false\n");
    else if(a==b) printf("true\n");
    else {
        m=a,n=b;
        for(int k=count;m!=0;) {
            i=m%10;
            j=n%10;
            printf("%d %d -- ", i,j);
            if(i!=j) {
                if((m/10)==0) printf("false\n");
                m/=10;
            }
            else {
                m/=10;
                n/=10;
                k--;
                if(k==0) {printf("true\n"); break;}
                if((m%10)!=(n%10)) {k++; n=b;}
            }
            printf("%d %d %d\n", m,n,k);
        }
    }
}