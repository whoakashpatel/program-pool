#include <stdio.h>
#include <string.h>

void arrangeAlph(char arr[], int a);

int main() {
    int t;
    scanf("%d", &t);
    for(int i=0;i<t;i++) {

        char s1[100],s2[100];
        scanf("%s", s1);
        scanf("%s", s2);

        int n1,n2;
        n1=strlen(s1), n2=strlen(s2);
        if(n1!=n2) {printf("The word lengths aren't equal.\n"); continue;}

        // arrange alphabets in order
        arrangeAlph(s1,n1);
        printf("%s\n", s1);
        arrangeAlph(s2,n1);
        printf("%s\n", s2);

        // check if alphabet order is equal
        for(int l=0;l<n1;l++) {
            if(s1[l]!=s2[l]) {printf("false\n"); break;}
            if(l==n1-1) printf("true\n");
        }
    }
}

void arrangeAlph(char arr[], int a) {
    for(int j=0;j<a;j++) {
        for(int k=j;k>0;k--) {
            if(arr[k]<arr[k-1]) {
                char b=arr[k];
                arr[k]=arr[k-1];
                arr[k-1]=b;
            } else break;
        }
    }
}