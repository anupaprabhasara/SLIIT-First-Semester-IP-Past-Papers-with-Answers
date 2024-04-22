#include <stdio.h>
#include <assert.h>

float calcPayment(int noBricks, char brickType);
float calcAdditionalPayment(char transportation, char unloading);
void testCalcPayment();

int main() {
	testCalcPayment();
	
	int noBricks, i;
	float initialPayment, additionalPayment, netPayment;
	char brickType, transportation, unloading;
	
	for(i=0; i<5; i++) {
		printf("Enter number of bricks : ");
		scanf("%d", &noBricks);
		printf("Enter brick type (S/L/C) : ");
		scanf(" %c", &brickType);
		printf("Needs assistance with unloading (Y/N) : ");
		scanf(" %c", &unloading);
		printf("Needs transportation (Y/N) : ");
		scanf(" %c", &transportation);
		
		initialPayment=calcPayment(noBricks, brickType);
		additionalPayment=calcAdditionalPayment(transportation, unloading);
		
		netPayment=initialPayment+additionalPayment;
		
		printf("\nNet payment amount : %.2f\n\n", netPayment);
	}
	
	return 0;
}

float calcPayment(int noBricks, char brickType) {
	float initialPayment;
	
	if(brickType=='S' || brickType=='s') {
		initialPayment=noBricks*20.0;
	}
	else if(brickType=='L' || brickType=='l') {
		initialPayment=noBricks*85.0;
	}
	else if(brickType=='C' || brickType=='c') {
		initialPayment=noBricks*35.0;
	}
	else {
		initialPayment=0.0;
	}
	
	return initialPayment;
}

float calcAdditionalPayment(char transportation, char unloading) {
	int nokm;
	float additionalPayment=0;
	
	if(transportation=='Y' || transportation=='y') {
		printf("Enter number of kilometers : ");
		scanf("%d", &nokm);
		
		additionalPayment+=nokm*150.0;
	}
	if(unloading=='Y' || unloading=='y') {
		additionalPayment+=3000.0;
	}
	
	return additionalPayment;
}

void testCalcPayment() {
	float initialPayment;
	
	initialPayment=calcPayment(10, 'S');
	assert(initialPayment==200);
	
	initialPayment=calcPayment(20, 'C');
	assert(initialPayment==700);
	
	return;
}
