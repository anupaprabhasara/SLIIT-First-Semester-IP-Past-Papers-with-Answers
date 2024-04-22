#include <stdio.h>
#include <assert.h>

float calcPayment(char brickType, int noBricks);
float calcAdditionalPayment(char unloading, char transportation);
void testCalcPayment();

int main() {
	testCalcPayment();
	
	int noBricks, x;
	float payment, addPayment, netPayment;
	char brickType, transportation, unloading;
	
	for(x=0; x<3; x++) {
		printf("Enter the number of bricks needed : ");
		scanf("%d", &noBricks);
	
		printf("Enter the type (A-Small Bricks, B-Large Bricks, C-Cement Bricks) : ");
		scanf(" %c", &brickType);
	
		payment=calcPayment(brickType, noBricks);
	
		printf("Do you needs assistance with unloading (Y/N) : ");
		scanf(" %c", &unloading);
	
		printf("Do you needs tranportation (Y/N) : ");
		scanf(" %c", &transportation);
	
		addPayment=calcAdditionalPayment(unloading, transportation);
	
		netPayment=payment+addPayment;
		
		puts("");
	
		printf("Total cost for customer %d : %.2f", x+1, netPayment);
		
		puts("");
		puts("");
	}
	
	return 0;
}

float calcPayment(char brickType, int noBricks) {
	float payment=0.0;
	
	if(brickType=='A' || brickType=='a') {
		payment=noBricks*40;
	}
	else if(brickType=='B' || brickType=='b') {
		payment=noBricks*80;
	}
	else if(brickType=='C' || brickType=='c') {
		payment=noBricks*100;
	}
	else {
		payment=0.0;
	}
	
	return payment;
}

float calcAdditionalPayment(char unloading, char transportation) {
	float addPayment=0.0, distance=0.0;
	
	if(unloading=='Y' || unloading=='y') {
		addPayment+=2750.0;
	}
	
	if(transportation=='Y' || transportation=='y') {
		printf("Enter the traveling distance (Km) : ");
		scanf("%f", &distance);
		
		addPayment+=distance*200.0;
	}
	
	return addPayment;
}

void testCalcPayment() {
	float payment=0.0;
	
	payment=calcPayment('A', 10);
	assert(payment==400.0);
	
	payment=calcPayment('C', 10);
	assert(payment==1000.0);
	
	return;
}
