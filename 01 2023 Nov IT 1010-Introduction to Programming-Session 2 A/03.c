//www.anupa.lk

#include <stdio.h>

int main() {
	int matrix[5][5], i, j, temp;

	for(i=0; i<5; i++) {
		for(j=0; j<5; j++) {
			printf("Enter %d, %d : ", i+1, j+1);
			scanf("%d", &matrix[i][j]);
				
			if(matrix[i][j]<0) {
				printf("Invalid Input!!! You can enter positive numbers only.");
				puts("");
				--j;
			}
			else {
				continue;
			}
		}
	}
	
	puts("");
	
	for(i=0; i<5; i++) {
		for(j=0; j<5; j++) {
			printf("%d   ", matrix[i][j]);
		}
		puts("");
	}
	
	for(i=0; i<5; i++) {
		for(j=0; j<2; j++) {
			temp=matrix[i][j];
			matrix[i][j]=matrix[i][4-j];
			matrix[i][4-j]=temp;
		}
	}
	
	puts("");
	
	for(i=0; i<5; i++) {
		for(j=0; j<5; j++) {
			printf("%d   ", matrix[i][j]);
		}
		puts("");
	}
	
	return 0;
}
