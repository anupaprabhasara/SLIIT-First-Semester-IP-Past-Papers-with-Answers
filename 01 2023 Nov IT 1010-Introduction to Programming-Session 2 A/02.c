//www.anupa.lk

#include <stdio.h>

int main() {
	int array1[7]={2, 4, 6, 8, 10, 12, 14};
	int array2[7], array3[7];
	int i, sum=0;
	
	for(i=0; i<7; i++) {
		array2[i]=0;
		array3[i]=0;
	}
	
	for(i=0; i<7; i++) {
		array2[i]=array1[i]*array1[i];
	}
	
	for(i=0; i<7; i++) {
		array3[i]=array1[i]+array2[i];
	}
	
	printf("Index\tValue");
	puts("");
	for(i=0; i<7; i++) {
		printf("%3d%9d", i, array3[i]);
		puts("");
		sum+=array3[i];
	}
	
	puts("");
	printf("Total of array3 elements is %d", sum);
	puts("");
	
	return 0;
}
