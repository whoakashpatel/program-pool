/* This program takes input N arrays of N elements
each and an array of N-1 elements. For each
element value of last array (say i) that ith min
element gets removed from each array.
Lastly, the remaining element and its original
index is printed for each array. */

#include <stdio.h>

int n;
void sort(int arr[], int index[]);
void removeR(int arr[], int index[], int r);

int main() {
    scanf("%d", &n);
    // initialise array of arrays using structure
    struct program {
        int queries[n];
        int index[n];
    } list[n];
    // take input programs and queries
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            scanf("%d", &list[i].queries[j]);
            list[i].index[j]=j;
        }
    }
    // take input indices to remove
    int rmIndex[n-1];
    for(int i=0;i<n-1;i++) scanf("%d", &rmIndex[i]);

    // sort each query & indice array
    for(int i=0;i<n;i++) sort(list[i].queries, list[i].index);
    // remove the rth min(s)
    for(int i=0;i<n;i++) {
        for(int j=0;j<n-1;j++) {
            removeR(list[i].queries, list[i].index, rmIndex[j]-1);
        }
    }
    // print the remaining element
    for(int i=0;i<n;i++) printf("%d %d\n", list[i].queries[0], list[i].index[0]);
    return 0;
}

void sort(int arr[], int index[]) {
    for(int i=0;i<n-1;i++) {
        for(int j=0;j<n-1;j++) {
            if(arr[j]>arr[j+1]) {
                // switch elements
                arr[j]^=arr[j+1];
                arr[j+1]^=arr[j];
                arr[j]^=arr[j+1];
                // switch indices
                index[j]^=index[j+1];
                index[j+1]^=index[j];
                index[j]^=index[j+1];
            }
        }
    }
}

void removeR(int arr[], int index[], int r) {
    for(int i=r;i<n-1;i++) {
        arr[i]=arr[i+1];
        index[i]=index[i+1];
    }
}
