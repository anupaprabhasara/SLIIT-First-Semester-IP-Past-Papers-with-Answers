//www.anupa.lk

#include <stdio.h>

struct cabdriver {
	int hireNo;
	char start[50];
	char destination[50];
	float distance;
}driver[4];

int main() {
	int i;
	float total, earn;
	FILE *hire;
	
	hire = fopen("hire.txt", "r");
	
	if(hire == NULL) {
		printf("Error! Could not open file.\n");
		return 1;
	}
	
	printf("%s%20s\n\n", "Hire No.", "Amount Earned");
	
	for(i=0; i<4; i++) {
		fscanf(hire, "%d, %s, %s, %f\n", &driver[i].hireNo, driver[i].start, driver[i].destination, &driver[i].distance);
	
		earn = driver[i].distance * 150;
		total += earn;
		
		printf("%3d\t\t%.2f\n", driver[i].hireNo, earn);
	}
	
	printf("\nTotal amount : %.2f\n", total);
	
	fclose(hire);
	
	return 0;
}
