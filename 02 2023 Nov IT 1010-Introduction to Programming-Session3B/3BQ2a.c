#include <stdio.h>

int main() {
	int array1[10]={0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	int array2[5]={0, 0, 0, 0, 0};
	int array3[2]={0, 0};
	int i, j=0;
	
	for(i=0; i<10; i++) {
		printf("Inset array1[%d] : ", i);
		scanf("%d", &array1[i]);
	}
	
	for(i=0; i<10; i++) {
		if(array1[i]%2==1) {
			array2[j]=array1[i];
			++j;
		}
	}
	
	for(i=0; i<10; i++) {
		array3[0]+=array1[i];
	}
	
	for(i=0; i<5; i++) {
		array3[1]+=array2[i];
	}
	
	puts("");
	printf("The sum of odd numbers : %d", array3[1]);
	puts("");
	printf("The sum of even numbers : %d", array3[0]-array3[1]);
	
	return 0;
}
