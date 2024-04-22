#include <stdio.h>
#include <string.h>

int main() {
	int rainfall, i;
	char day[25];
	
	FILE *write=fopen("rain.txt", "w");
	
	if(write==NULL) {
		printf("Error opening file!!!\n");
		return 1;
	}
	
	for(i=0; i<7; i++) {
		printf("Enter the day of week : ");
		scanf("%s", day);
		
		printf("Enter the rainfall (mm) : ");
		scanf("%d", &rainfall);
		
		fprintf(write, "%s   %d\n", day, rainfall);
	}
	
	fclose(write);
	
	return 0;
}
