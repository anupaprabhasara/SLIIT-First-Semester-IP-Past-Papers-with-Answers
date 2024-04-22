#include <stdio.h>

int main() {
	int rows, i, j, x;
	
	printf("Enter the number of rows : ");
	scanf("%d", &rows);
	
	x=rows;
	
	for(i=0; i<rows; i++) {
		for(j=1; j<x; j++) {
			printf(" ");
		}
		for(j=0; j<i+1; j++) {
			printf("* ");
		}
		--x;
		puts("");
	}
	
	x=rows;
	
	for(i=0; i<rows; i++) {
		for(j=1; j<i+2; j++) {
			printf(" ");
		}
		for(j=1; j<x; j++) {
			printf("* ");
		}
		--x;
		puts("");
	}
}
