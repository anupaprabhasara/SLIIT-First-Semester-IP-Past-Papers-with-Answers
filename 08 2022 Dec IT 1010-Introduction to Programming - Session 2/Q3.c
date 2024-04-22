#include <stdio.h>
#include <assert.h>

float calcRemainingFuel(int vehicleType, float usedFuelQuota);
float calcFuelCost(int vehicleType, float usedFuelQuota);
void displayDetails(int vType, float usedFuelQuota, float remainingQuota, float cost);

int main() {
	int vehicleType;
	float usedFuelQuota, remainingQuota, cost;
	
	remainingQuota=calcRemainingFuel(2, 15);
	assert(remainingQuota==5);
	remainingQuota=calcRemainingFuel(4, 10);
	assert(remainingQuota==20);
	
	while(1) {
		printf("Enter vehicle type (1/2/3/4) or -1 to exit : ");
		scanf("%d", &vehicleType);
		
		if(vehicleType==-1) {
			return 1;
		}
		
		printf("Enter used fuel quota : ");
		scanf("%f", &usedFuelQuota);
		
		remainingQuota=calcRemainingFuel(vehicleType, usedFuelQuota);
		
		cost=calcFuelCost(vehicleType, usedFuelQuota);
		
		displayDetails(vehicleType, usedFuelQuota, remainingQuota, cost);
		
	}
	
	return 0;
}

float calcRemainingFuel(int vehicleType, float usedFuelQuota) {
	float remainingQuota;
	
	switch (vehicleType) {
		case 1:
			remainingQuota=5.0-usedFuelQuota;
			break;
		case 2:
			remainingQuota=20.0-usedFuelQuota;
			break;
		case 3:
			remainingQuota=20.0-usedFuelQuota;
			break;
		case 4:
			remainingQuota=30.0-usedFuelQuota;
			break;
		default:
			remainingQuota=0.0;
	}
	
	return remainingQuota;
}

float calcFuelCost(int vehicleType, float usedFuelQuota) {
	float cost;
	
	switch (vehicleType) {
		case 1:
			cost=usedFuelQuota*370.0;
			break;
		case 2:
			cost=usedFuelQuota*370.0;
			break;
		case 3:
			cost=usedFuelQuota*510.0;
			break;
		case 4:
			cost=usedFuelQuota*370.0;
			break;
		default:
			cost=0.0;
	}
	
	return cost;
}

void displayDetails(int vType, float usedFuelQuota, float remainingQuota, float cost) {
	
	printf("\nVehicle type\tQuota used\tQuota Remaining\tFuel Cost\n");
	printf("%d\t\t%.3f\t\t%.3f\t\t%.2f\n\n", vType, usedFuelQuota, remainingQuota, cost);
	
	return;
}
