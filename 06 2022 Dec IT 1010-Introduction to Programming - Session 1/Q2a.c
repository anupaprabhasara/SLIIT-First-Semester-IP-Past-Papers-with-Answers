#include <stdio.h>

int main() {
	int numArr[8], i, n;
	
	for(i=0; i<8; i++) {
		printf("numArr[%d] : ", i);
		scanf("%d", &numArr[i]);
	}
	
	puts("");
	
	for(i=0; i<8; i++) {
		printf("%d\t", numArr[i]);
	}
	
	printf("\n\n");
	
	printf("Moving all the elements in the array 'n' position to right\n");
	do {
		printf("Enter a value for 'n' : ");
		scanf("%d", &n);
		if(n<=0 || n>=8) {
			printf("Enter a positive number greater than zero and less than maximum size of the array\n");
		}
	} while(n<=0 || n>=8);
	
	puts("");
	
	for(i=8-n; i<8; i++) {
		printf("%d\t", numArr[i]);
	}
	for(i=0; i<8-n; i++) {
		printf("%d\t", numArr[i]);
	}
	
	puts("");
	
	return 0;
}
