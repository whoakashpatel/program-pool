// perfect nums are those whose sum of divisors is equal to the number itself

#include <stdio.h>

int main() {
    int l; //test cases
    scanf("%d", &l);
    for(int i=0;i<l;i++) {
        int n,sum=0;
        scanf("%d", &n);
        for(int j=1;j<=(n/2);j++) {
            if((n%j)==0) sum+=j;
        }
        if(sum==n) printf("true\n");
        else printf("false\n");
    }
    return 0;
}