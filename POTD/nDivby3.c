/* This program takes input an array on n integers
and checks if combination of all integers(concat)
gives a number divisible by 3. If so, prints 1
else prints 0. */

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++) scanf("%d", &arr[i]);
    int sum=0;
    for(int i=0;i<n;i++) {
        while(arr[i]!=0) {
            sum+=arr[i]%10;
            arr[i]/=10;
        }
    }
    if(sum%3==0) printf("1");
    else printf("0");
}