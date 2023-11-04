#include <stdio.h>

int main() {
    int t,n;
    scanf("%d", &t);
    for(int i=0;i<t;i++) {
        int a=0,b=1;
        scanf("%d", &n);
        switch(n) {
            case 0: printf("%d\n", a);
                    break;
            case 1: printf("%d\n", b);
                    break;
            default: for(int j=0;j<n-1;j++) {
                        b+=a;
                        a=b-a;
                     } printf("%d\n", b);
        }
    }
}