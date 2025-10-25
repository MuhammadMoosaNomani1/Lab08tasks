#include<stdio.h>
int main(){
	int floors=3, rooms=2, beds=3;
	
	int building[3][2][3]={{{1,0,1},{0,1,1}},{{1,1,1},{1,1,0}},{{0,0,0},{1,0,1}}};
	int totalEmpty = 0;
	printf("Empty Bed Locations (floor, room, bed):\n");
	for(int f=0;f<floors;f++){
		for(int r=0;r<rooms;r++){
			for(int b=0;b<beds;b++){
				if(building[f][r][b]==0){
				totalEmpty = totalEmpty+1; 
			printf("Floor %d, Room %d, Bed %d\n", f+1,r+1,b+1);
				} 
			}
		}
	}
	printf("\nTotal Empty Beds in Building = %d\n", totalEmpty);
	return 0;
	}
