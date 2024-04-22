#include <stdio.h>

int main() {
	int number, n1, n2, n3, n4, newnum;
	
	while(1) {
		printf("Enter a four digit number : ");
		scanf("%d", &number);
		
		if(number>999 && number<10000) {
			break;
		}
		else {
			printf("Invalid number.\n");
		}
	}
	
	n1=(number%10000)/1000;
	n2=(number%1000)/100;
	n3=(number%100)/10;
	n4=(number%10)/1;
	
	newnum=n4*1000+n3*100+n2*10+n1*1;
	
	if(number==newnum) {
		printf("It is a palindrome.");
	}
	else {
		printf("It is not a palindrome.");
	}
	
	return 0;
}
