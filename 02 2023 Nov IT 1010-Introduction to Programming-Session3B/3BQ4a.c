#include <stdio.h>
#include <string.h>

int main() {
	int i;
	float rainfall;
	char day[50];
	
	FILE *write = fopen("rain.txt", "w");
	
	if(write==NULL) {
		printf("Error opening file!!!\n");
		return 1;
	}
	
	for(i=0; i<7; i++) {
		printf("Enter the day of the week : ");
		scanf("%s", day);
		
		printf("Enter the rainfall (mm) : ");
		scanf("%f", &rainfall);
		
		fprintf(write, "%s %f\n", day, rainfall);
		
		puts("");
	}
	
	fclose(write);
	
	printf("Rainfall data saved successfully!!!\n");
	
	return 0;
}
