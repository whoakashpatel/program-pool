#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    char arr[n], unique[n];
    int count[n], j=0; // j - unique char count
    // count & store unique char and corresponding count while taking input
    for(int i=0;i<n;i++) {
        count[i]=0;
        scanf(" %c", &arr[i]);
        int occ=0; // occurence count of input
        for(int k=0;k<=i;k++) {
            if(unique[k]==arr[i]) {
                occ=1;
                count[k]++;
            }
        }
        if(occ==0) {unique[j]=arr[i]; count[j]=1; j++;} // if doesn't exit gets added to arr unique
    }
    // print the max count char
    int change=0,mI=0;
    for(int i=0;i<n;i++) {
        if(count[i]>count[mI]) mI=i;
        if((i<j)&&(count[i]!=count[0])) change=1; // accounts for change in freq
    }
    if(change==0) {printf("%d\n", -1); return 0;}
    printf("%c\n", unique[mI]);
}