/* This program essentially expands a compressed string of the form
a(9c)x(4m)(7j) to acccccccccxmmmmjjjjjjj */

#include <stdio.h>

int main() {
	int t;
    scanf("%d", &t);
    for(int i=0;i<t;i++) {
        int n;
        scanf("%d", &n);
        char cmprS[n];
        scanf("%s", cmprS);
        for(int j=0;j<n;j++) {
            char c;
            int k=0,m=0;
            if(cmprS[j]=='(') {
                while(cmprS[j+k+2]!=')') {m=m*10+(cmprS[j+k+1]-48); k++;} // calc & stores num in var m
                c=cmprS[j+k+1]; // stores the char to be printed
                for(int l=0;l<m;l++) printf("%c",c); // prints the sequence of char c
                j+=(k+2); // jumps to ')'
            }
            else printf("%c", cmprS[j]); // prints the same char
        }
    }
}
