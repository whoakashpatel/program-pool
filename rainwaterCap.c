#include <stdio.h>

int main() {
    int m;
    printf("Enter the size of array: ");
    scanf("%d", &m);
    int blocks[m], sorted[m], index[m], usedJ[m];
    int waterCount=0;
    // Take Input of Array
    printf("Enter the elements:\n");
    for(int i=0;i<m;i++) {
        scanf("%d", &blocks[i]);
        sorted[i]=blocks[i];
        index[i]=i;
    }
    printf("Initiated array: ");
    for(int i=0;i<m;i++) printf("%d ", blocks[i]);
    printf("\n");
    // Sorting the input arr for max to min values
    for(int i=0;i<m-1;i++) {
        for(int j=0;j<m-1;j++) {
            if(sorted[j]<sorted[j+1]) {
                // switch the values
                sorted[j]^=sorted[j+1];
                sorted[j+1]^=sorted[j];
                sorted[j]^=sorted[j+1];
                // switch the respective index values
                index[j]^=index[j+1];
                index[j+1]^=index[j];
                index[j]^=index[j+1];
            }
        }
    }
    printf("sorting and indexation finished.\n");
    printf("Sorted array: ");
    for(int i=0;i<m;i++) printf("%d ", sorted[i]);
    printf("\n");
    printf("Index array: ");
    for(int i=0;i<m;i++) printf("%d ", index[i]);
    printf("\n");
    // Calc
    int k=0;
    for(int i=1;i<m;i++) {
        int mI=index[0]; // max block index
        int tempMin=sorted[i], tmI=index[i];
        usedJ[k]=tmI, k++;
        // a - lesser index, b - greater index
        int a=mI<tmI?mI:tmI, b;
        b=(mI^tmI)^a;
        printf("Checking %d (%d - %d).\n", tempMin,a,b);
        for(int j=a+1;j<b;j++) {
            // Check & continue if used j
            for(int l=0;l<k;l++) {
                if(usedJ[l]==j) goto skipped;
            }
            waterCount+=tempMin-blocks[j]; // increase water count
            usedJ[k]=j, k++; // stores used j
            skipped:
            printf("Checked for j=%d & waterCount=%d & usedJ = ", j,waterCount);
            for(int c=0;c<m;c++) printf("%d ", usedJ[c]);
            printf("\n");
        }
    }
    printf("calc finished.\n");
    printf("The amount of rain water that can be stored is %d.\n", waterCount);
}