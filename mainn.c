#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
	int i,n,a,b,c, q,w;
	printf("Enter five integers:\n");
	scanf("%d%d%d%d%d", &i, &n, &a, &b, &c);
		for(q=1; q<=i; q++){
			printf("*");
		}
		printf("\n");
		for(q=1; q<=n; q++){
			printf("*");
		}
		printf("\n");
		for(q=1; q<=a; q++){
			printf("*");
		}
		printf("\n");
		for(q=1; q<=b; q++){
			printf("*");
		}
		printf("\n");
		for(q=1; q<=c; q++){
			printf("*");
		}
		return 0;
}
