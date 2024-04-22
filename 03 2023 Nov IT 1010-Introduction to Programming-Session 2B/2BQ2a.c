#include <stdio.h>

int main() {
	int i, x, max=0;
	int array1[7]={2, 4, 6, 8, 10, 12, 14};
	int array2[7]={0, 0, 0, 0, 0, 0, 0};
	int array3[7]={0, 0, 0, 0, 0, 0, 0};
	
	for(i=0; i<7; i++) {
		array2[i]=array1[i]*array1[i];
	}
	
	for(i=0; i<7; i++) {
		array3[i]=array1[i]+array2[i];
	}
	
	for(i=0; i<7; i++) {
		if(max<array3[i]) {
			max=array3[i];
			x=i;
		}
	}
	
	printf("Max Index\tValue\n");
	printf("%8d%12d", x, max);
	
	return 0;
}
