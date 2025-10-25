#include<stdio.h>
#include<limits.h>
int main(){
	int cities=2, days=3, times=3;
	
	int temp[2][3][3] = {{{25,30,22},{26,31,23},{24,29,21}},{{18,22,16},{20,25,19},{21,24,20}}};
	
	for(int c=0;c<cities;c++){
		int maxTemp=INT_MIN; 
		for(int d=0;d<days;d++){
			for(int t=0;t<times;t++){
				if(temp[c][d][t]>maxTemp) maxTemp=temp[c][d][t];
			}
		}
	printf("City %d highest temperature = %d\n", c+1,maxTemp);
	}

	return 0;
}
