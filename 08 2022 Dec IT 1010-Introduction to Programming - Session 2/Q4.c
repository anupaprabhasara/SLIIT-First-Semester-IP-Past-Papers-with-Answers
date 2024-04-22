#include <stdio.h>
#include <string.h>

int main() {
	int telephone, x;
	char name[25], scanname[25];
	
	FILE *write=fopen("Directory.dat", "w");
	
	if(write==NULL) {
		printf("Error opening file!!!\n");
		return 1;
	}
	
	for(x=0; x<5; x++) {
		printf("Enter name : ");
		scanf("%s", name);
		
		printf("Enter telephone number : ");
		scanf("%d", &telephone);
		
		fprintf(write, "%s\t%d\n", name, telephone);
	}
	
	fclose(write);
	
	FILE *read=fopen("Directory.dat", "r");
	
	if(read==NULL) {
		printf("Error opening file!!!\n");
		return 1;
	}
	
	printf("\nEnter name : ");
	scanf("%s", scanname);
	
	while(!feof(read)) {
		fscanf(read, "%s\t%d\n", name, &telephone);
		
		if(!strcmp(name, scanname)) {
			printf("Telephone number : %d\n", telephone);
			break;
		}
	}
	
	if(strcmp(name, scanname)) {
		printf("Details not found!!!\n");
	}
	
	fclose(read);
	
	return 0;
}
