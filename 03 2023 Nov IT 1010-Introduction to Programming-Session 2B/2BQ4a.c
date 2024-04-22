#include <stdio.h>
#include <string.h>

int main() {
	int itemNo, itemSold, x;
	float price;
	char desc[25];
	
	FILE *write = fopen("sales.txt", "w");
	
	if(write==NULL) {
		printf("Error opening file!!!\n");
		return 1;
	}
	
	while(x!=-1) {
		printf("Enter item number : ");
		scanf("%d", &itemNo);
		
		printf("Enter item description : ");
		scanf("%s", desc);
		
		printf("Enter items sold : ");
		scanf("%d", &itemSold);
		
		printf("Enter price of one item : ");
		scanf("%f", &price);
		
		fprintf(write, "%d  %s  %d  %.2f\n", itemNo, desc, itemSold, price);
		
		puts("");
		
		printf("Do you want to enter details for another item (Yes---> Any number, No---> -1) : ");
		scanf("%d", &x);
		
		puts("");
	}
	
	fclose(write);
	printf("Sales data saved successfully!!!");
	
	return 0;
}
