#include <stdio.h>
#include <string.h>

int main() {
	int itemNo, itemSold;
	float price, amount, total=0.0;
	char desc[25];
	
	FILE *read = fopen("sales.txt", "r");
	
	if(read==NULL) {
		printf("Error opening file!!!\n");
		return 1;
	}
	
	printf("Item No.\tDescription\tAmount earned\n");
	
	
	while(!feof(read)) {
		fscanf(read, "%d  %s  %d  %f\n", &itemNo, desc, &itemSold, &price);
		
		amount=itemSold*price;
		total+=amount;
		
		printf("%d\t\t%s\t\t%.2f\n", itemNo, desc, amount);
	}
	
	fclose(read);
	
	puts("");
	printf("Total amount : %.2f\n", total);
	
	return 0;
}
