/* This program checks if a given element is
greater than all elements to its right, if so,
prints that element - leader element */

#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++) scanf("%d", &arr[i]); // input
    for(int i=0;i<n-1;i++) {
        int e=0;
        for(int j=i+1;j<n;j++) {
            // set log var e to 1 if less
            if(arr[j]>arr[i]) {e=1; break;}
        } if(e==0) printf("%d ", arr[i]); // print ith if greatest
    } printf("%d", arr[n-1]); // last element is always leader
    return 0;
}