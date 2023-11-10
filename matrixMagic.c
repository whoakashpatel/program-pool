/* This program checks if transverse of an input
matrix is same as the original matrix */

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n][n], e=0;
    for(int i=0;i<n;i++) {
        int j=0;
        for(;j<n;j++) {
            scanf("%d", &arr[i][j]);
            // check if resp elements not equal, if so, update log var e to 1 
            if((i-j)>0&&(arr[i][j]!=arr[j][i]))  e=1;
        }
    }
    if(e==1) printf("NO");
    else printf("YES");
    return 0;
}