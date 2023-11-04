#include <stdio.h>

int main() {
    
    int w,x,y,z;
    
    do {
        printf("Enter rows & columns for first matrix: ");
        scanf("%d %d", &w,&x);
        printf("Enter rows & columns for second matrix: ");
        scanf("%d %d", &y,&z);
    } while(x!=y);
    
    int m1[w][x], m2[y][z], p[w][z];
    
    // Take input for the two matrices
    printf("Enter the elements of first matrix:\n");
    for(int i=0;i<w;i++) {
        for(int j=0;j<x;j++) {
            printf("[%d][%d]: ", i,j);
            scanf("%d", &m1[i][j]);
        }
    }
    printf("Enter the elements of second matrix:\n");
    for(int i=0;i<y;i++) {
        for(int j=0;j<z;j++) {
            printf("[%d][%d]: ", i,j);
            scanf("%d", &m2[i][j]);
        }
    }

    // Print the two matrices
    printf("First Matrix:\n");
    for(int i=0;i<w;i++) {
        for(int j=0;j<x;j++) {printf("%d ", m1[i][j]);}
        printf("\n");
    }
    printf("Second Matrix:\n");
    for(int i=0;i<y;i++) {
        for(int j=0;j<z;j++) {printf("%d ", m2[i][j]);}
        printf("\n");
    }

    // Operate for multiplication of two matrices
    for(int i=0;i<w;i++) {
        for(int j=0;j<z;j++) {
            int psum=0;
            for(int k=0;k<z;k++) psum+=(m1[i][k]*m2[k][j]);
            p[i][j]=psum;
        }
    }
    
    // Print the Product Matrix
    printf("Here\'s the Product Matrix:\n");
    for(int i=0;i<w;i++) {
        for(int j=0;j<z;j++) {printf("%d ", p[i][j]);}
        printf("\n");
    }
    
}