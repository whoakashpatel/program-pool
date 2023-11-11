#include <stdio.h>

int n;
void sort(int queries[][n], int index[][n], int q);
void shiftR(int queries[][n], int index[][n], int q, int r);

int main() {
    scanf("%d", &n);
    // initialise array of arrays using structure
    int queries[n][n], index[n][n];
    // take input programs and queries
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            scanf("%d", &queries[i][j]);
            index[i][j]=j;
        }
    }
    // take input indices to remove
    int rmIndex[n-1];
    for(int i=0;i<n-1;i++) scanf("%d", &rmIndex[i]);

    // sort each query & indice array
    for(int i=0;i<n;i++) sort(queries, index, i);
    // remove the rth min(s)
    for(int i=0;i<n;i++) {
        for(int j=0;j<n-1;j++) {
            shiftR(queries, index, i, rmIndex[j]-1);
        }
    }
    // print the remaining element
    for(int i=0;i<n;i++) printf("%d %d\n", queries[i][0], index[i][0]);
    return 0;
}

void sort(int queries[][n], int index[][n], int q) {
    for(int i=0;i<n-1;i++) {
        for(int j=0;j<n-1;j++) {
            if(queries[q][j]>queries[q][j+1]) {
                // switch elements
                queries[q][j]^=queries[q][j+1];
                queries[q][j+1]^=queries[q][j];
                queries[q][j]^=queries[q][j+1];
                // switch indices
                index[q][j]^=index[q][j+1];
                index[q][j+1]^=index[q][j];
                index[q][j]^=index[q][j+1];
            }
        }
    }
}

void shiftR(int queries[][n], int index[][n], int q, int r) {
    for(int i=r;i<n-1;i++) {
        queries[q][i]=queries[q][i+1];
        index[q][i]=index[q][i+1];
    }
}