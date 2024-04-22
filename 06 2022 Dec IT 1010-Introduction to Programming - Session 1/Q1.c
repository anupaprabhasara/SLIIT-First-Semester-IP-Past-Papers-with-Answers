#include <stdio.h>

int main() {
	int lines, i, j, k;
	char char1, char2;
	
	printf("Enter 1st character : ");
	scanf(" %c", &char1);
	
	printf("Enter 2nd character : ");
	scanf(" %c", &char2);
	
	printf("Enter number of lines : ");
	scanf("%d", &lines);
	
	for(i=1; i<=lines; i++) {
		j=0;
		k=1;
		while(j<i) {
			printf("%c", char1);
			while(k<i) {
				printf("%c", char2);
				k+=2;
				break;
			}
			j+=2;
		}
		puts("");
	}
	
	return 0;
}
