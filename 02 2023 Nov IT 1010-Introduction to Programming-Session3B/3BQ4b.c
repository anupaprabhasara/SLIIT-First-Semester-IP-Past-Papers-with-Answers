#include <stdio.h>
#include <string.h>

int main() {
	int i;
	float rainfall, min=1000.0;
	char day[50], minDay[50];
	
	FILE *read = fopen("rain.txt", "r");
	
	if(read==NULL) {
		printf("Error opening file!!!\n");
		return 1;
	}
	
	for(i=0; i<7; i++) {
		fscanf(read, "%s %f\n", day, &rainfall);
		
		if(min>rainfall) {
			min=rainfall;
			strcpy(minDay, day);
		}
	}
	
	fclose(read);
	
	printf("%s\t%.2f mm", minDay, min);
	
	return 0;
}
