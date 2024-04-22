#include <stdio.h>

int main() {
	int i, j;
	float accountDetails[4][3], overdraft, amount;
	
	for(i=0; i<4; i++) {
		printf("Input the account details of customer %d\n", i+1);
		
		for(j=0; j<1; j++) {
			printf("Input the balance : ");
			scanf("%f", &accountDetails[i][0]);
			printf("Input the overdraft limit : ");
			scanf("%f", &accountDetails[i][1]);
			printf("Input the withdrawal limit : ");
			scanf("%f", &accountDetails[i][2]);
			
			overdraft=0-accountDetails[i][1];
			
			if(overdraft>accountDetails[i][0]) {
				printf("Bank balance can't less than %.2f\n\n", overdraft);
				--j;
			}
			else {
				puts("");
			}
		}
	}
	
	puts("");
	
	for(i=0; i<4; i++) {
		for(j=0; j<3; j++) {
			printf("%.2f   ", accountDetails[i][j]);
		}
		puts("");
	}
	
	printf("\nSelect the customer (1/2/3/4) : ");
	scanf("%d", &i);
	printf("Input the amount to be deposit : ");
	scanf("%f", &amount);
	
	accountDetails[i-1][0]+=amount;
	
	puts("");
	
	for(i=0; i<4; i++) {
		for(j=0; j<3; j++) {
			printf("%.2f   ", accountDetails[i][j]);
		}
		puts("");
	}
	
	return 0;
}
