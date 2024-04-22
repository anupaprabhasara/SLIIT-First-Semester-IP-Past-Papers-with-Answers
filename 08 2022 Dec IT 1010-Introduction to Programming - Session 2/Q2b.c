#include <stdio.h>

int main() {
	int image[4][4], i, j;
	
	for(i=0; i<4; i++) {
		printf("Values for row%d\n", i+1);
		for(j=0; j<4; j++) {
			printf("\tEnter element %d : ", j+1);
			scanf("%d", &image[i][j]);
		}
	}
	
	puts("");
	
	for(i=0; i<4; i++) {
		for(j=0; j<4; j++) {
			printf("%d   ", image[i][j]);
		}
		puts("");
	}
	
	for(i=0; i<4; i++) {
		for(j=0; j<4; j++) {
			if(image[i][j]>=55) {
				image[i][j]=1;
			}
			else {
				image[i][j]=0;
			}
		}
	}
	
	puts("");
	
	for(i=0; i<4; i++) {
		for(j=0; j<4; j++) {
			printf("%d  ", image[i][j]);
		}
		puts("");
	}
	
	return 0;
}
