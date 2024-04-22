//www.anupa.lk

#include <stdio.h>
#include <assert.h>

float calcPayment(float medicalCharge, int type, int days);
float calcDiscount(char seniorCitizen, char loyaltyMember);
void testCalcPayment();

int main() {
	testCalcPayment();
	
	int type, days, i;
	float medicalCharge, payment, discount, netPayment;
	char seniorCitizen, loyaltyMember;
	
	for(i=0; i<5; i++) {
		printf("Enter medical charge : ");
		scanf("%f", &medicalCharge);
	
		printf("Enter accommodation type (1-Deluxe Room, 2-Grand Deluxe, 3-Grand Suite) : ");
		scanf("%d", &type);
	
		printf("Enter number of days stayed : ");
		scanf("%d", &days);
	
		payment = calcPayment(medicalCharge, type, days);
	
		printf("Is the patient a senior citizen (Y/N) : ");
		scanf(" %c", &seniorCitizen);
	
		printf("Is the patient a loyalty member (Y/N) : ");
		scanf(" %c", &loyaltyMember);
	
		discount = calcDiscount(seniorCitizen, loyaltyMember);
	
		netPayment = payment * (1-discount);
		
		printf("\nNet hospital payment for patient %d : %.2f\n\n", i+1, netPayment);
	}
	
	return 0;
}

float calcPayment(float medicalCharge, int type, int days) {
	float accommodationCharge;
	
	switch (type) {
		case 1:
			accommodationCharge = 17000.0 * days;
			break;
		case 2:
			accommodationCharge = 25000.0 * days;
			break;
		case 3:
			accommodationCharge = 32000.0 * days;
			break;
		default:
			accommodationCharge = 0.0;
	}
	
	return medicalCharge + accommodationCharge;
}

float calcDiscount(char seniorCitizen, char loyaltyMember) {
	float discount = 0.0;
	
	if(seniorCitizen=='Y' || seniorCitizen=='y') {
		discount+=0.05;
	}
	if(loyaltyMember=='Y' || loyaltyMember=='y') {
		discount+=0.1;
	}
	
	return discount;
}

void testCalcPayment() {
	float payment, netPayment;
	
	payment = calcPayment(1000.0, 1, 2);
	assert(payment==35000.0);
	
	netPayment = calcPayment(2000.0, 3, 3) * (1 - calcDiscount('Y', 'Y'));
	assert(netPayment==83300.0);
	
	return;
}
