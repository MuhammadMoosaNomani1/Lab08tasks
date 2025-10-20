#include<stdio.h>
#include<stdlib.h>
#define MAX_JOINTS 10
#define MAX_MOVEMENTS 10
#define COORDINATES 3
int main(){
	int readings[MAX_JOINTS][MAX_MOVEMENTS][COORDINATES];
	int joints, movements;
	int i, j, k;
	printf("Enter number of joints");
	scanf("%d", &joints);
    printf("Enter number of movements");
	scanf("%d", &movements);
	printf("Enter x, y, z readings for each joint and movement:\n");
	for(i=0;i<joints;i++){
		for(j=0;j<movements;j++){
			printf("Joint %d, Movement %d:\n", i+1, j+1);
			for(k=0;k<COORDINATES;k++){
				char axis = (k==0) ? 'X':(k==1)? 'Y' : 'Z';			
				printf(" %c:", axis);
				scanf("%d", &readings[i][j][k]);
				}
		}
	}
	for(i=0;i<joints;i++){
		for(j=0;j<movements;j++){
			for(k=0;k<COORDINATES;k++){
				if(readings[i][j][k] < 0)
				readings[i][j][k]= abs(readings[i][j][k]);		
				}
		}
	}
	printf("\nNormalized (Absolute) Readings: \n");
for(i=0;i<joints;i++){
	for(j=0;j<movements;j++){
		printf("Joint %d, Movement %d =>", i+1, j+1);
		printf("X: %d, Y: %d, Z:%d\n", readings[i][j][0], readings[i][j][1], readings[i][j][2]);
	}
}
return 0;
}


