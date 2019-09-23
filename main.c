#include <stdio.h>
#include <stdlib.h>

int main() {
	int var1, var2;
	printf("Input two integers:");
	scanf("%d", &var1);
	scanf("%d", &var2);
	if (var1 > var2)
		printf("%d is larger", var1);
		else if (var2 > var1)
			printf("%d is larger", var2);
			else 
				printf("These numbers are equal");
return 0;
}
