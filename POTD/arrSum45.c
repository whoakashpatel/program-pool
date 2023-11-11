/* This program takes input an array of size n and
integer key. If key exists, performs operations
on either side of the matching element and
returns a resultant array. If key doesn't exist
it returns the original array. */

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++) scanf("%d", &arr[i]);
    int key, s=-1;
    scanf("%d", &key);
    for(int i=0;i<n;i++) if(key==arr[i]) {s=i; break;}
    int nl=s,nr=n-s-1;
    int min=nl<nr?nl:nr;
    if(s==-1) {for(int i=0;i<n;i++) printf("%d ", arr[i]); return 0;}
    for(int i=0;i<min;i++) printf("%d ", arr[i]+arr[i+s+1]);
    if(nl!=min) for(int i=s-1;i<s;i++) printf("%d ", arr[i]);
    else for(int i=s+min+1;i<n;i++) printf("%d ", arr[i]);
    return 0;
}
