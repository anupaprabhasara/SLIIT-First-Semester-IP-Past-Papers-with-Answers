#include <stdio.h>

int main() {
	int userRating[5]={0};
	int rating, i;
	
	do {
		printf("Enter your rating (1-5) and Enter -99 to exit : ");
		scanf("%d", &rating);
		
		switch (rating) {
			case 1:
				userRating[0]+=1;
				break;
			case 2:
				userRating[1]+=1;
				break;
			case 3:
				userRating[2]+=1;
				break;
			case 4:
				userRating[3]+=1;
				break;
			case 5:
				userRating[4]+=1;
				break;
			case -99:
				printf("Exited!\n");
				break;
			default:
				printf("Invalid Input!\n");
		}
		
	} while(rating!=-99);
	
	puts("");
	
	printf("1\t");
	for(i=0; i<userRating[0]; i++) {
		printf("*");
	}
	puts("");
	
	printf("2\t");
	for(i=0; i<userRating[1]; i++) {
		printf("*");
	}
	puts("");
	
	printf("3\t");
	for(i=0; i<userRating[2]; i++) {
		printf("*");
	}
	puts("");
	
	printf("4\t");
	for(i=0; i<userRating[3]; i++) {
		printf("*");
	}
	puts("");
	
	printf("5\t");
	for(i=0; i<userRating[4]; i++) {
		printf("*");
	}
	puts("");
	
	return 0;
}
