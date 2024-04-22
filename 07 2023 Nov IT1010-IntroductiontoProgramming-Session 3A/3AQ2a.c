#include <stdio.h>

int main() {
	int i, j;
	int array1[10]={0};
	int array2[5]={0};
	int array3[2]={0};
	
	for(i=0; i<10; i++) {
		printf("Insert array1[%d] : ", i);
		scanf("%d", &array1[i]);
	}
	
	j=0;
	
	for(i=0; i<10; i++) {
		if(array1[i]%2==0) {
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
	
	printf("\nThe sum of even numbers : %d", array3[1]);
	printf("\nThe sum of odd numbers : %d", array3[0]-array3[1]);
	
	return 0;
}
