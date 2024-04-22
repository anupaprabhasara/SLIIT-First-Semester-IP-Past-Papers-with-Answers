#include <stdio.h>
#include <assert.h>

float calcInterest(int FDType, float depositAmount);
float calcTax(float annualInterest);
void displayDetails(float interest, float taxAmount);

int main() {
	int FDType, x;
	float depositAmount, annualInterest, taxAmount;
	
	annualInterest=calcInterest(1, 10000.5);
	assert(annualInterest>1600 && annualInterest<1601);
	
	annualInterest=calcInterest(3, 20001);
	assert(annualInterest>3100 && annualInterest<3101);
	
	while(x!=-1) {
		printf("Fixed Deposit Type : ");
		scanf("%d", &FDType);
		
		printf("Deposit Amount : ");
		scanf("%f", &depositAmount);
		
		annualInterest=calcInterest(FDType, depositAmount);
		taxAmount=calcTax(annualInterest);
		displayDetails(annualInterest, taxAmount);
		
		printf("\n\nPress any key to continue and Enter \"-1\" to Exit : ");
		scanf("%d", &x);
		
		puts("");
	}
	
	return 0;
}

float calcInterest(int FDType, float depositAmount) {
	float annualInterest;
	
	switch (FDType) {
		case 1:
			annualInterest=depositAmount*16/100.0;
			break;
		case 2:
			annualInterest=depositAmount*15/100.0;
			break;
		case 3:
			annualInterest=depositAmount*15.5/100.0;
			break;
		case 4:
			annualInterest=depositAmount*17.5/100.0;
			break;
		default:
			annualInterest=0.0;
	}
	
	return annualInterest;
}

float calcTax(float annualInterest) {
	float taxAmount;
	
	taxAmount=annualInterest*5/100.0;
	
	return taxAmount;
}

void displayDetails(float interest, float taxAmount) {
	float payable;
	
	payable=interest-taxAmount;
	
	printf("\nAnnual Interest\tTax Amount\tAmount Payable\n");
	printf("%.2f\t\t%.2f\t\t%.2f", interest, taxAmount, payable);
	
	return;
}
