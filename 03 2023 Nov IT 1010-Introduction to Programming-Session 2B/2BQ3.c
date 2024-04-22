#include <stdio.h>
#include <string.h>
#include <assert.h>

float calcPayment(int type, int days, float medicalCharge);
float calcDiscount(char loyaltyMember, char seniorCitizen);
void testCalcPayment();

int main() {
	testCalcPayment();
	
	int days, i, type;
	float medicalCharge, payment, discount, netPayment;
	char seniorCitizen, loyaltyMember;
	
	for(i=0; i<3; i++) {
		printf("Enter the medical charge : ");
		scanf("%f", &medicalCharge);
	
		printf("Enter the accommodation type : ");
		scanf("%d", &type);
	
		printf("Enter the number of days stayed : ");
		scanf("%d", &days);
	
		payment=calcPayment(type, days, medicalCharge);
	
		printf("Is the inpatient a senior citizen? (Y/N) : ");
		scanf(" %c", &seniorCitizen);
	
		printf("Is the inpatient a loyalty member? (Y/N) : ");
		scanf(" %c", &loyaltyMember);
	
		discount=calcDiscount(loyaltyMember, seniorCitizen);
	
		netPayment=payment*(1-discount);
		
		printf("\nTotal cost for inpatient %d : %.2f\n\n", i+1, netPayment);
	}
	
	return 0;
}

float calcPayment(int type, int days, float medicalCharge) {
	float payment;
	
	switch (type) {
		case 1:
			payment=medicalCharge+(days*15000);
			break;
		case 2:
			payment=medicalCharge+(days*20000);
			break;
		case 3:
			payment=medicalCharge+(days*25000);
			break;
		default:
			payment=0.0;
	}
	
	return payment;
}

float calcDiscount(char loyaltyMember, char seniorCitizen) {
	float discount=0.0;
	
	if(loyaltyMember=='Y' || loyaltyMember=='y') {
		discount+=0.2;
	}
	
	if(seniorCitizen=='Y' || seniorCitizen=='y') {
		discount+=0.1;
	}
	
	return discount;
}

void testCalcPayment() {
	float payment;
	
	payment=calcPayment(1, 5, 5000);
	assert(payment==80000);
	
	payment=calcPayment(2, 5, 10000);
	assert(payment==110000);
	
	return;
}
