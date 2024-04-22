#include <stdio.h>

int main() {
	int itemNo, sold;
	float price, total;
	
	FILE *read=fopen("item.txt", "r");
	
	if(read==NULL) {
		printf("Error opening file!!!\n");
		return 1;
	}
	
	printf("Item No.\tTotal Amount\n");
	
	while(!feof(read)) {		
		fscanf(read, "%d %d %f\n", &itemNo, &sold, &price);
		
		if(sold>3) {
			total=sold*price;
			total-=total*5/100;
		}
		else {
			total=sold*price;
		}
		
		printf("%d\t\t%.2f\n", itemNo, total);
	}
	
	fclose(read);
	
	return 0;
}
