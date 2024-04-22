#include <stdio.h>

int main() {
	int lines, line, i, j, k, x;
	char char1, char2;
	
	printf("Enter the first character: ");
	scanf(" %c", &char1);
	
	printf("Enter the second character: ");
	scanf(" %c", &char2);
	
	printf("Enter the number of lines: ");
	scanf("%d", &lines);
	
	puts("");
	
	line=lines;
	
	for(i=0; i<lines; i++) {
		
		k=0;
		j=0;
		
		for(x=lines; x>line; x--) {
			printf(" ");
		}
		
		while(j<line) {
			while(k<line) {
				printf("%c", char1);
				break;
			}
			while(k<line-1) {
				printf("%c", char2);
				break;
			}
			k++;
			j++;
		}
		line--;
		
		puts("");
	}
	
	return 0;
}
