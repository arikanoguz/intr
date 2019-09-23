#include <stdio.h>
#include <stdlib.h>

int main() {
	int var1, var2, var3, sum, avg, prd;
	printf("Input three integers:");
	scanf("%d %d %d" , &var1, &var2, &var3);
	sum = var1 + var2 + var3;
	avg = sum/3;
	prd = var1 * var2 * var3;
	printf("Sum is %d\n", sum);
	printf("Average is %d\n", avg);
	printf("Product is %d\n", prd);
return 0;
}
