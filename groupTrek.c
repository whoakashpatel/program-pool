#include <stdio.h>
#include <string.h>
typedef unsigned int uint;

// G1 -- ABCDdcba, G2 -- AaBbCc

int main() {
    char str[100];
    scanf("%s", str);
    if(strlen(str)==1||str[0]<65||str[0]>90) {printf("-1\n"); return 0;} // termination condition
    // Group 1 -- ABCDdcba verification
    else if(str[strlen(str)-1]-32==str[0]) {
        for(uint i=1;i<(strlen(str)/2);i++) {
            if(str[strlen(str)-1-i]-32!=str[i]) {printf("-1\n"); return 0;}
        } printf("1\n");
    }
    // Group 2 -- AaBbCc verification
    else if(str[1]-32==str[0]) {
        for(uint i=2;i<(strlen(str)/2);i+=2) {
            if(str[i+1]-32!=str[i]) {printf("-1\n"); return 0;}
        } printf("2\n");
    }
    else {printf("-1\n"); return 0;} // termination condition
}