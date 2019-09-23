#include <stdio.h>
#include <stdlib.h>

int main() {
	int var1, var10, var100, var;
	printf("Enter a three-digit number:");
	scanf("%d", &var);
	printf("%d %d %d", (var%1000)/100, (var%100)/10, var %10);
return 0;
}
