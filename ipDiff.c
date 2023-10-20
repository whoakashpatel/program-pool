#include <stdio.h>

int main() {

    char ip1[15], ip2[15];
    scanf("%s %s", ip1,ip2);

    int a,b,c,d,c1,c2;
    sscanf(ip1, "%d.%d.%d.%d", &a,&b,&c,&d);
    c1=a<<24|b<<16|c<<8|d;
    sscanf(ip2, "%d.%d.%d.%d", &a,&b,&c,&d);
    c2=a<<24|b<<16|c<<8|d;

    printf("%d\n", c2-c1);
    return c2-c1;

}
