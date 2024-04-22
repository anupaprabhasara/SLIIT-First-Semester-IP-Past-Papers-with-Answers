#include <stdio.h>
#include <string.h>

int main() {
	char mazeMap[5][5];
	int x, y, i, j;
	
	for(i=1; i<=5; i++) {
		printf("Enter the location of obstacle %d : ", i);
		scanf("%d %d", &x, &y);
		
		if(mazeMap[x][y]=='X') {
			printf("Sorry, there is an obstacle in this place.\n");
			--i;
		}
		else {
			mazeMap[x][y]='X';
		}
	}
	
	for(i=0; i<5; i++) {
		for(j=0; j<5; j++) {
			if(mazeMap[i][j]!='X') {
				mazeMap[i][j]='O';
			}	
		}
	}
	
	puts("");
	
	for(i=0; i<5; i++) {
		for(j=0; j<5; j++) {
			printf("%c  ", mazeMap[i][j]);
		}
		puts("");
	}
	
	printf("\nEnter your current location in the maze : ");
	scanf("%d %d", &x, &y);
	
	if(mazeMap[x][y]!='X') {
		printf("You can move ");
		if(mazeMap[x-1][y]=='O') {
			printf("up ");
		}
		if(mazeMap[x+1][y]=='O') {
			printf("down ");
		}
		if(mazeMap[x][y-1]=='O') {
			printf("left ");
		}
		if(mazeMap[x][y+1]=='O') {
			printf("right ");
		}
	}
	else {
		printf("The start location can't be an obstacle.");
	}
	
	return 0;
}
