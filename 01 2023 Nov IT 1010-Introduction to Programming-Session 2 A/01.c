//www.anupa.lk

#include <stdio.h>

int main() {
	int int1, int2, i, j, count=0, sum=0;
	int array[100000];
	
	while(1) {
		while(1) {
			printf("Enter the first positive integer: ");
			scanf("%d", &int1);
		
			if(int1>=0) {
				puts("");
				break;
			}
			else {
				printf("Invalid Input!!! Enter Again.");
				puts("");
			}
		}
	
		while(1) {
			printf("Enter the second positive integer: ");
			scanf("%d", &int2);
		
			if(int2>=0) {
				puts("");
				break;
			}
			else {
				printf("Invalid Input!!! Enter Again.");
				puts("");
			}
		}
		
		if(int1>int2) {
			break;
		}
		else {
			printf("Please enter the larger number as first positive integer!!!");
			puts("");
			printf("Enter Again!!!");
			puts("");
			puts("");
		}
	}
	
	for(i=int2; i<=int1; i++) {
		if(i%4==0) {
			array[count]=i;
			count++;
			continue;
		}
		else {
			continue;
		}
	}
	
	for(j=0; j<count; j++) {
		printf("%d ", array[j]);
		sum+=array[j];
	}
	
	puts("");
	puts("");
	
	printf("The sum of all integers between %d and %d that are divisible by 4 is: %d", int2, int1, sum);
	
	puts("");
	
	return 0;
}
