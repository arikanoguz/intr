#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
	int i,j,p = 1;
	scanf("%d", &i);
	for(j=1; j<=i; j++){
		p=p*j;
	}
	printf("%d", p);
	
	return 0;
}
