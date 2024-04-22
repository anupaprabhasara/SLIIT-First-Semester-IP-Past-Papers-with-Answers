#include <stdio.h>

int main() {
	int category, performance, days;
	char cont;
	float bSalary, bonus, dPayment;
	
	while(1) {
		printf("Enter employee Category : ");
		scanf("%d", &category);
		
		switch(category) {
			case 1:
				printf("Enter basic salary : ");
				scanf("%f", &bSalary);
				
				while(1) {
					printf("Enter performance level (1/2/3) : ");
					scanf("%d", &performance);
					
					if(performance>0 && performance<4) {
						break;
					}
					else {
						printf("Invalid performance level!\n");
					}
				}
				
				bonus=bSalary*performance;
				
				printf("Bonus : %.2f\n\n", bonus);
				
				break;
			case 2:
				printf("Enter daily payment : ");
				scanf("%f", &dPayment);
				
				while(1) {
					printf("Enter number of worked days : ");
					scanf("%d", &days);
					
					if(days>=0 && days<=366) {
						break;
					}
					else {
						printf("Invalid number of worked days!\n");
					}
				}
				
				if(days>=240) {
					bonus=dPayment*20;
					printf("Bonus : %.2f\n\n", bonus);
				}
				else{
					printf("Not eligible for a bonus!\n\n");
				}
				
				break;
			case 3:
				bonus=50000.0;
				
				printf("Bonus : %.2f\n\n", bonus);
				
				break;
			default:
				printf("Invalid employee type!\n\n");
		}
		
		while(1) {
			printf("Do you want to continue? (Y/N) : ");
			scanf(" %c", &cont);
		
			if(cont=='Y' || cont=='y') {
				puts("");
				break;
			}
			else if(cont=='N' || cont=='n') {
				return 1;
			}
			else {
				printf("Invalid input!\n");
				continue;
			}
		}
		
	}
	
	return 0;
}
