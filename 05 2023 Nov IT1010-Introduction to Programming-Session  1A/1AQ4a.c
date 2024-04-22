#include <stdio.h>

int main() {
	int x, num, orders;
	float price;
	
	FILE *write=fopen("pizza.txt", "w");
	
	if(write==NULL) {
		printf("Error while opening the file!!!\n");
		return 1;
	}
	
	while(x!=-1) {
		printf("Enter the order number : ");
		scanf("%d", &num);
		
		printf("Enter the number of pizzas ordered : ");
		scanf("%d", &orders);
		
		printf("Enter the price of one pizza (Rs) : ");
		scanf("%f", &price);
		
		fprintf(write, "%d %d %f\n", num, orders, price);
		
		printf("\nNext Item---> Any Number, Exit---> -1 : ");
		scanf("%d", &x);
		
		puts("");
	}
	
	fclose(write);
	
	return 0;
}
