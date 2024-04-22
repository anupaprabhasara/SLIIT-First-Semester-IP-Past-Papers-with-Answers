#include <stdio.h>

int main() {
	int maze[5][5]={0};
	int i, j, x, y;
	
	for(i=0; i<5; i++) {
		printf("Enter the location of obstacle %d : ", i+1);
		scanf("%d %d", &x, &y);
		
		if(maze[x][y]==1) {
			printf("Sorry, there is an obstacle in this place.\n");
			--i;
		}
		else if(x>4 || x<0 || y>4 || y<0) {
			printf("Invalid Input!!!\n");
			--i;
		}
		else {
			maze[x][y]=1;
		}
	}
	
	for(i=0; i<5; i++) {
		for(j=0; j<5; j++) {
			if(maze[i][j]!=1) {
				maze[i][j]=0;
			}
		}
	}
	
	puts("");
	
	for(i=0; i<5; i++) {
		for(j=0; j<5; j++) {
			printf("%d  ", maze[i][j]);
		}
		puts("");
	}
	
	puts("");
	
	printf("Enter your current location in the maze : ");
	scanf("%d %d", &x, &y);
	
	if(maze[x][y]!=1) {
		printf("You can move ");
		
		if(y!=0 && maze[x][y-1]==0) {
			printf("left ");
		}
		if(y!=4 && maze[x][y+1]==0) {
			printf("right ");
		}
		if(x!=0 && maze[x-1][y]==0) {
			printf("up ");
		}
		if(x!=4 && maze[x+1][y]==0) {
			printf("down ");
		}
	}
	else {
		printf("The start location can't be an obstacle");
	}
	
	return 0;
}
