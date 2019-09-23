#include <stdio.h>
#include <stdlib.h>

int main() {
	int var1, var2, var3, var4, sum, avg, prd;
	printf("Input four integers:");
	scanf("%d %d %d %d" , &var1, &var2, &var3, &var4);
	if (var1 <= 0)
	var1 = 1;
	if (var2 <= 0)
	var2 = 1;
	if (var3 <= 0)
	var3 = 1;
	if (var4 <= 0)
	var4 = 1;
	prd = var1 * var2 *var3 * var4;
	printf("%d", prd);
return 0;
}
