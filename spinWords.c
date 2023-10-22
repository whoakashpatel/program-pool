// reverses any word with >=5 letters in a given string

#include <stdio.h>
#include <string.h>
typedef unsigned int uint;

int main() {
    char s[100];
    gets(s);
    uint i=0;
    while(i<strlen(s)) {
        uint j=0;
        for(;(s[i+j]!=' ')&&(i+j<strlen(s));j++) {
        }
        if(j>4) {
            for(uint l=0;l<j/2;l++) {
                char temp=s[i+l];
                s[i+l]=s[i+j-l-1];
                s[i+j-l-1]=temp;
                // Why does below bitwise not work here?
                /* s[i+l]^=s[i+j-l-1];
                s[i+j-l]^=s[i+l-1];
                s[i+l]^=s[i+j-l-1]; */
            }
        } i+=j+1;
    }
    puts(s);
}