#include <stdio.h>

int main() {
	int i, j, myArr[4][4], search, p=0, q=0, count=0, x[4], y[4];
	
	for(i=0; i<4; i++) {
		for(j=0; j<4; j++) {
			printf("Enter %d,%d : ", i+1, j+1);
			scanf("%d", &myArr[i][j]);
			
			if(myArr[i][j]<0) {
				printf("Enter a positive number!!!\n");
				--j;
			}
		}
	}
	
	puts("");
	
	for(i=0; i<4; i++) {
		for(j=0; j<4; j++) {
			printf("%d  ", myArr[i][j]);
		}
		puts("");
	}
	
	puts("");
	
	printf("Enter a number : ");
	scanf("%d", &search);
	
	for(i=0; i<4; i++) {
		for(j=0; j<4; j++) {
			if(search==myArr[i][j]) {
				++count;
				x[p]=i;
				y[q]=j;
				++p;
				++q;
			}
		}
	}
	
	p=0;
	q=0;
	
	if(count>0) {
		printf("You can find %d at ", search);
		for(i=0; i<count; i++) {
			printf("[%d,%d]", x[p], y[q]);
			while(i<count-1) {
				printf(", ");
				break;
			}
			++p;
			++q;
		}
	}
	else {
		printf("Number not found.");
	}
	
	return 0;
}
