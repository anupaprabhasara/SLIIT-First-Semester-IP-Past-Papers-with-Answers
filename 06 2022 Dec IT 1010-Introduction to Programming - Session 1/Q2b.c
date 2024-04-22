#include <stdio.h>

int main() {
	int identityArr[4][4], i, j, count=0;
	
	for(i=0; i<4; i++) {
		printf("Values for row%d\n", i+1);
		for(j=0; j<4; j++) {
			printf("\tEnter element %d : ", j+1);
			scanf("%d", &identityArr[i][j]);
		}
	}
	
	puts("");
	
	for(i=0; i<4; i++) {
		for(j=0; j<4; j++) {
			printf("%d  ", identityArr[i][j]);
		}
		puts("");
	}
	
	for(i=0; i<4; i++) {
		for(j=0; j<4; j++) {
			if(i==j) {
				if(identityArr[i][j]!=1) {
					count+=1;
				}
			}
			else {
				if(identityArr[i][j]!=0) {
					count+=1;
				}
			}
		}
	}
	
	if(count>0) {
		printf("\nThis is not a identity matrix!\n");
	}
	else {
		printf("\nThis is a identity matrix\n");
	}
	
	return 0;
}
