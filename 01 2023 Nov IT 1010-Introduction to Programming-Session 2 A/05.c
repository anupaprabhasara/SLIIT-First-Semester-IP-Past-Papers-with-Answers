//www.anupa.lk

#include <stdio.h>

struct cabdriver {
	int hireNo;
	char start[50];
	char destination[50];
	float distance;
} driver[4];

int main() {
	int i;
	FILE *hire;
	
	hire = fopen("hire.txt", "w");
	
	if(hire == NULL) {
		printf("Error! Could not open file.\n");
		return 1;
	}
	
	for(i=0; i<4; i++) {
		printf("Enter hire number : ");
		scanf("%d", &driver[i].hireNo);
		
		printf("Enter start location : ");
		scanf("%s", driver[i].start);
		
		printf("Enter destination : ");
		scanf("%s", driver[i].destination);
		
		printf("Enter distance (Km) : ");
		scanf("%f", &driver[i].distance);
		
		puts("");
		
		fprintf(hire, "%d, %s, %s, %.2f\n", driver[i].hireNo, driver[i].start, driver[i].destination, driver[i].distance);
	}
	
	fclose(hire);
	
	printf("Hiring details saved successfully!\n");
	
	return 0;
}
