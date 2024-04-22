#include <stdio.h>

int main() {
	int i, sum=0, num1, num2;
	
	while(1) {
		while(1) {
			printf("Enter the first positive integer : ");
			scanf("%d", &num1);
			
			if(num1>=0) {
				break;
			}
			else {
				printf("Enter a positive number!!!");
				puts("");
			}
		}
		while(1) {
			printf("Enter the second positive integer : ");
			scanf("%d", &num2);
			
			if(num2>=0) {
				break;
			}
			else {
				printf("Enter a positive number!!!");
				puts("");
			}
		}
		
		if(num1>num2) {
			break;
		}
		else {
			printf("Enter a larger number as the first number!!!");
			puts("");
		}
	}
	
	printf("Odd numbers between %d and %d are : ", num2, num1);
	for(i=num2; i<=num1; i++) {
		if(i%2==1) {
			printf("%d ", i);
			sum+=i;
		}
	}
	
	puts("");
	printf("Sum of odd numbers between %d and %d are : %d", num2, num1, sum);
	
	return 0;
}
