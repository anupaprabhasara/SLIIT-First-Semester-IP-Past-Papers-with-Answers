#include <stdio.h>
#include <string.h>

int main() {
	int i, len, lentemp;
	char strings[20], temp;
	
	printf("Enter a text : ");
	scanf("%s", strings);
	
	lentemp=len=strlen(strings);
	
	for(i=0; i<len/2; i++) {
		--lentemp;
		temp=strings[i];
		strings[i]=strings[lentemp];
		strings[lentemp]=temp;
	}
	
	puts("");
	
	for(i=0; i<len; i++) {
		printf("%c", strings[i]);
	}
	
	return 0;
}
