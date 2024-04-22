#include <stdio.h>

int main() {
	int i, j, x, row, rows;
	
	printf("Enter the number of rows : ");
	scanf("%d", &rows);
	
	row=rows;
	
	for(i=0; i<rows; i++) {
		for(j=0; j<i; j++) {
			printf("  ");
		}
		for(x=0; x<(row*2)-1; x++) {
			printf("* ");
		}
		row--;
		puts("");
	}
	
	row=rows;
	
	for(i=2; i<(rows+1); i++) {
		for(j=0; j<(row-2); j++) {
			printf("  ");
		}
		for(x=0; x<(i*2)-1; x++) {
			printf("* ");
		}
		row--;
		if((i+1)<rows+1) {
			puts("");
		}
		else {
			break;
		}
	}
	return 0;
}
