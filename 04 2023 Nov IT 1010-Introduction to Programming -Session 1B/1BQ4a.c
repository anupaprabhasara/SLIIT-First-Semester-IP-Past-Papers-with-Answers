#include <stdio.h>

int main() {
	int itemNo, sold, x;
	float price;
	
	FILE *write=fopen("item.txt", "w");
	
	if(write==NULL) {
		printf("Error opening file!!!\n");
		return 1;
	}
	
	while(x!=-1) {
		printf("Enter item number : ");
		scanf("%d", &itemNo);
		
		printf("Enter quantity sold : ");
		scanf("%d", &sold);
		
		printf("Enter price of one item : ");
		scanf("%f", &price);
		
		fprintf(write, "%d %d %f\n", itemNo, sold, price);
		
		printf("Do you want to enter details for another item (YES---> Any Number, NO---> -1) : ");
		scanf("%d", &x);
		
		puts("");
	}
	
	fclose(write);
	
	return 0;
}
