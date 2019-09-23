#include <stdio.h>
#include <stdlib.h>

int main() {
	int var1, var2, remainder, r2;
	printf("Input two integers:");
	scanf("%d", &var1);
	scanf("%d", &var2);
	remainder = var1 % var2;
	if (remainder == 0)
		printf("First is a multiple of the second");
			else 
				;
	r2 = var2 % var1;
	if (r2 == 0)
		printf("Second is a multiple of the first");
return 0;
}
