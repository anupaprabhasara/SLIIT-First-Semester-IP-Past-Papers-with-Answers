#include <stdio.h>
#include <string.h>

int main() {
	int rainfall, i, max=0;
	char day[25], maxday[25];
	
	FILE *read=fopen("rain.txt", "r");
	
	if(read==NULL) {
		printf("Error opening file!!!\n");
		return 1;
	}
	
	while(!feof(read)) {
		fscanf(read, "%s   %d\n", day, &rainfall);
		
		if(rainfall>max) {
			max=rainfall;
			strcpy(maxday, day);
		}
	}
	
	fclose(read);
	
	printf("%s    %d", maxday, max);
	
	return 0;
}
