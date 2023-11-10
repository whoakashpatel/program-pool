/* This program identifies and prints the longest
substring which has all its characters unique */

#include <stdio.h>
#include <string.h>

int main() {
char str[100];
int max=0;
scanf("%s", str);
int n=strlen(str), unique[n];
for(int i=0;i<n-max;i++) {
    int k=0, count=0;
    for(int j=i;j<n;j++) {
        // Check & skip if matches some char
        for(int l=0;l<k;l++) if(str[j]==unique[l]) goto termn;
        // store if unique
        unique[k]=str[j], k++;
        count++;
    }
    termn:
    max=max<count?count:max;
}
printf("%d", max);
return 0;
}