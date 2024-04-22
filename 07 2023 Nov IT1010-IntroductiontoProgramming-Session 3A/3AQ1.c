#include <stdio.h>

int main() {
	int i, j, lines;
	char char1, char2;
	
	printf("Enter the first character : ");
	scanf(" %c", &char1);
	
	printf("Second the first character : ");
	scanf(" %c", &char2);
	
	printf("Enter the number of lines : ");
	scanf("%d", &lines);
	
	for(i=1; i<=lines; i++) {
		for(j=lines; j>i; j--) {
			printf(" ");
		}
		for(j=0; j<(i*2)-1; j++) {
			if(j%2==0) {
				printf("%c", char1);
			}
			else {
				printf("%c", char2);
			}
		}
		puts("");
	}
	
	return 0;
}
