#include <stdio.h>

int main() {
	int x, num, orders;
	float price, amount;
	
	FILE *read=fopen("pizza.txt", "r");
	
	if(read==NULL) {
		printf("Error while opening the file!!!\n");
		return 1;
	}
	
	printf("Order No.\tTotal Amount\n");
	
	while(!feof(read)) {
		
		fscanf(read, "%d %d %f\n", &num, &orders, &price);
		
		amount=orders*price;
		
		if(amount>10000) {
			amount-=amount*10/100;
		}
		
		printf("%d\t\t%.2f\n", num, amount);
	}
	
	fclose(read);
	
	return 0;
}
