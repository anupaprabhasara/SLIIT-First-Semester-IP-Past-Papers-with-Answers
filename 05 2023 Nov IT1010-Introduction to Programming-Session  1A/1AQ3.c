#include <stdio.h>
#include <assert.h>

float calcPayment(int peak, int offPeak);
float calcServiceCharge(int peak, int offPeak);
void testCalcPayment();

int main() {
	testCalcPayment();
	
	int peak, offPeak, x;
	float payment, charge, total;
	
	while(x!=-1) {
		printf("Enter number of units used in peak hours : ");
		scanf("%d", &peak);
	
		printf("Enter number of units used in off-peak hours : ");
		scanf("%d", &offPeak);
		
		payment=calcPayment(peak, offPeak);
		charge=calcServiceCharge(peak, offPeak);
		
		total=payment+charge;
		
		printf("Monthly bill payment : %.2f", total);
		
		printf("\n\nNext Bill---> Any Number, Exit---> -1 : ");
		scanf("%d", &x);
		
		puts("");
	}
	
	return 0;
}

float calcPayment(int peak, int offPeak) {
	float payment;
	
	if(peak>=0 && peak<=90) {
		payment=peak*55;
	}
	else if(peak>=91 && peak<=180) {
		payment=peak*60;
	}
	else if(peak>180) {
		payment=peak*100;
	}
	else {
		payment=0;
	}
	
	if(offPeak>=0 && offPeak<=90) {
		payment+=offPeak*42;
	}
	else if(offPeak>=91 && offPeak<=180) {
		payment+=offPeak*50;
	}
	else if(offPeak>180) {
		payment+=offPeak*75;
	}
	else {
		payment+=0;
	}
	
	return payment;
}

float calcServiceCharge(int peak, int offPeak) {
	int sum=peak+offPeak;
	float charge;
	
	if(sum>=0 && sum<=100) {
		charge=550;
	}
	else if(sum>=101 && sum<=200) {
		charge=650;
	}
	else if(sum>200) {
		charge=1200;
	}
	else {
		charge=0;
	}
	
	return charge;
}

void testCalcPayment() {
	float payment;
	
	payment=calcPayment(150, 45);
	assert(payment==10890);
	
	payment=calcPayment(250, 180);
	assert(payment==34000);
	
	return;
}
