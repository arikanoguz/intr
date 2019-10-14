#include <stdio.h>
#include <stdlib.h>

void draw_square(int);

int main() {
	int N = 0;
	printf("Enter a side length: ");
	scanf("%d", &N);
	
	draw_square(N);
	
	return 0;
}

void draw_square(int length){
	int k, i =0;
	for(k=1; k<=length; k++){
		for(i=1; i<=length; i++) printf("*");
		printf("\n");
	}	
}
