#include <stdio.h>

int main(void) {
	int t, n, d, i, j;
	scanf("%d", &t);
	for(j=0;j<t;j++) {
	    int a=0, b=1, c=1;
	    scanf("%d", &n);
	    switch(n) {
	        case 0: printf("%d\n", a);
	                 break;
	        case 1: printf("%d\n", b);
	                 break;
	        case 2: printf("%d\n", c);
	                 break;
	        default : for(i=0;i<(n-2);i++) {
	                  d=a+b+c;
	                  a=b;
	                  b=c;
	                  c=d;
	    			  }
	    			  printf("%d\n", d);
	    }
	}
}