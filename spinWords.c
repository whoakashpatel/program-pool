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
        while(i+j<strlen(s)) {
            if(s[i+j]!=' ') j++;
            else break;        
        }
        /* Above loop replacement doesn't check outside arr size */
        if(j>4) {
            for(uint l=0;l<j/2;l++) {
                char temp=s[i+l];
                s[i+l]=s[i+j-l-1];
                s[i+j-l-1]=temp;
                // bitwise is not recommended for char
            }
        } i+=j+1;
    }
    puts(s);
}