#include <stdio.h>

int main() {
	int ans, i, j, count, a1, a2, a3, a4;
	char id[50];
	
	FILE *write=fopen("answers.dat", "w");
	
	if(write==NULL) {
		printf("Error occured while opening the file!");
		return 1;
	}
	
	for(i=0; i<5; i++) {
		printf("Enter Student ID : ");
		scanf("%s", id);
		fprintf(write, "%s\t", id);
		for(j=0; j<4; j++) {
			printf("Enter answer for Q%d : ", j+1);
			scanf("%d", &ans);
			if(ans<=5 && ans>0) {
				fprintf(write, "%d ", ans);
			}
			else {
				printf("Invalid input!!! Enter again.\n");
				--j;
			}
		}
		fprintf(write, "\n");
		puts("");
	}
	
	fclose(write);
	
	FILE *read=fopen("answers.dat", "r");
	
	if(read==NULL) {
		printf("Error occured while opening the file!");
		return 1;
	}
	
	printf("Student ID\tNumber of correct answers\n");
	
	while(!feof(read)) {
		count=0;
		fscanf(read, "%s\t%d %d %d %d\n", id, &a1, &a2, &a3, &a4);
		if(a1==1) {
			count+=1;
		}
		if(a2==4) {
			count+=1;
		}
		if(a3==2) {
			count+=1;
		}
		if(a4==3) {
			count+=1;
		}
		printf(" %s\t\t\t%d\n", id, count);
	}
	
	fclose(read);
	
	return 0;
}
