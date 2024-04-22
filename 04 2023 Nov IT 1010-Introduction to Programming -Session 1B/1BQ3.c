#include <stdio.h>
#include <assert.h>

void testCalcPayment();
float calcPayment(int offPeak, int peak);
float calcServiceCharge(int offPeak, int peak);

int main() {
	testCalcPayment();
	
	int peak, offPeak, i;
	float payment, serviceCharge, total;
	
	for(i=1; i<=5; i++) {
		printf("Enter number of units used in peak hours : ");
		scanf("%d", &peak);
	
		printf("Enter number of units used in off-peak hours : ");
		scanf("%d", &offPeak);
		
		payment=calcPayment(offPeak, peak);
		serviceCharge=calcServiceCharge(offPeak, peak);
	
		total=payment+serviceCharge;
		
		printf("Monthly bill payment : %.2f\n\n", total);
	}
	
	return 0;
}

float calcPayment(int offPeak, int peak) {
	float payment;
	
	if(peak>=0 && peak<=100) {
		peak*=45;
	}
	else if(peak>=101 && peak<=200) {
		peak*=65;
	}
	else if(peak>200) {
		peak*=90;
	}
	else {
		peak=0;
	}
	
	if(offPeak>=0 && offPeak<=100) {
		offPeak*=35;
	}
	else if(offPeak>=101 && offPeak<=200) {
		offPeak*=50;
	}
	else if(offPeak>200) {
		offPeak*=70;
	}
	else {
		offPeak=0;
	}
	
	payment=peak+offPeak;
	
	return payment;
}

float calcServiceCharge(int offPeak, int peak) {
	int usage;
	float serviceCharge;
	
	usage=peak+offPeak;
	
	if(usage>=0 && usage<=150) {
		serviceCharge=600;
	}
	else if(usage>=151 && usage<=250) {
		serviceCharge=700;
	}
	else if(usage>250) {
		serviceCharge=1500;
	}
	else {
		serviceCharge=0;
	}
	
	return serviceCharge;
}

void testCalcPayment() {
	float payment;
	
	payment=calcPayment(45, 35);
	assert(payment==3150.0);
	
	payment=calcPayment(150, 300);
	assert(payment==34500.0);
	
	return;
}
