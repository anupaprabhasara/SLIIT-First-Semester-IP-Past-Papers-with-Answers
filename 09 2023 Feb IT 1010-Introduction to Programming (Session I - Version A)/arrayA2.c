#include <stdio.h>

int main() {
	int i, j;
	float sales[2][3];
	
	for(i=0; i<2; i++) {
		printf("Enter the sales amount of sales person %d.\n", i+1);
		for(j=0; j<3; j++) {
			printf("\t\tProduct %d : ", j+1);
			scanf("%f", &sales[i][j]);
		}
	}
	
	printf("\nThe sales amount of 2 sales person for 3 products.\n\n");
	
	for(i=0; i<2; i++) {
		for(j=0; j<3; j++) {
			printf("%.2f\t\t", sales[i][j]);
		}
		puts("");
	}
	
	printf("\nThe sales person with the highest sales amount is sales person ");
	
	if(sales[0][0]+sales[0][1]+sales[0][2]>sales[1][0]+sales[1][1]+sales[1][2]) {
		printf("1\n");
	}
	else if(sales[0][0]+sales[0][1]+sales[0][2]<sales[1][0]+sales[1][1]+sales[1][2]) {
		printf("2\n");
	}
	else {
		printf("1 and 2\n");
	}
}
