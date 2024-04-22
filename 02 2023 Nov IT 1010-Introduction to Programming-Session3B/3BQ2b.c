#include <stdio.h>

int main() {
	int i, type, customer;
	float transDetails[3][3], amount;
	
	for(i=0; i<3; i++) {
		printf("Input the account details of customer %d\n", i+1);
		
		while(1) {
			printf("Input the total deposits : ");
			scanf("%f", &transDetails[i][0]);
		
			printf("Input the total withdrawals : ");
			scanf("%f", &transDetails[i][1]);
		
			printf("Input the withdrawal limit : ");
			scanf("%f", &transDetails[i][2]);
		
			if(transDetails[i][0]<0 || transDetails[i][1]<0 || transDetails[i][2]<0) {
				printf("Total deposits, withdrawals, and withdrawal limits can't be negative.\n\n");
			}
			else {
				break;
			}
		}
		
		puts("");
	}
	
	printf("\n    ___________________________________________________________\n");
	
	for(i=0; i<3; i++) {
		printf("   | %15.2f   | %15.2f   | %15.2f   |\n", transDetails[i][0], transDetails[i][1], transDetails[i][2]);
		printf("    ___________________________________________________________\n");
	}
	
	printf("\n\nSelect the customer (1/2/3) : ");
	scanf("%d", &customer);
	
	printf("Do you want to deposit or withdraw money (1-deposit, 2-withdraw) : ");
	scanf("%d", &type);
	
	if(type==1) {
		printf("Amount : ");
		scanf("%f", &amount);
	}
	else if(type==2) {
		while(1) {
			printf("Amount : ");
			scanf("%f", &amount);
			
			if(amount>transDetails[customer-1][2]) {
				printf("Enter a amount less than withdrawal limit!!!\n");
			}
			else {
				break;
			}
		}
	}
	else {
		printf("Invalid Input!!!");
	}
	
	transDetails[customer-1][type-1]+=amount;
	
	printf("\n    ___________________________________________________________\n");
	
	for(i=0; i<3; i++) {
		printf("   | %15.2f   | %15.2f   | %15.2f   |\n", transDetails[i][0], transDetails[i][1], transDetails[i][2]);
		printf("    ___________________________________________________________\n");
	}
	
	return 0;
}
