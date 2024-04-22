#include <stdio.h>

int main() {
	int array1[7]={0, 0, 0, 0, 0, 0, 0};
	int array2[7]={0, 0, 0, 0, 0, 0, 0};
	int array3[7]={0, 0, 0, 0, 0, 0, 0};
	int i;
	
	for(i=0; i<7; i++) {
		printf("Inset array1[%d] : ", i);
		scanf("%d", &array1[i]);
	}
	
	for(i=0; i<7; i++) {
		array2[i]=array1[6-i];
	}
	
	for(i=0; i<7; i++) {
		array3[i]=array1[i]*array2[i];
	}
	
	puts("");
	
	for(i=0; i<7; i++) {
		printf("%d\n", array3[i]);
	}
}
