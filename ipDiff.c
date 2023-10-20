#include <stdio.h>
#include <string.h>

void sumStore(char a[], int b[]);

int main() {

    char ip1[15], ip2[15];
    scanf("%s %s", ip1,ip2);
    int s1[4], s2[4];
    for(int i=0; i<4; i++) {s1[i]=0; s2[i]=0;}
    
    // calc & store the four numbers in resp arrays for ip1 & ip2
    sumStore(ip1,s1);
    sumStore(ip2,s2);

    // Calculate total ip(s) for each
    long int count1=0,count2=0;
    for(int i=0;i<4;i++) {
        count1=(count1*256)+s1[i];
        count2=(count2*256)+s2[i];
    }

    // prints the diff, required result
    printf("%ld\n", count2-count1);

}

void sumStore(char a[], int b[]) {
    b[0]=0;
    for(unsigned int i=0,j=0;(i<strlen(a))&&(j<4);i++) {
        if(a[i]!='.') b[j]=(b[j]*10)+(a[i]-48);
        else j++;
    }
}