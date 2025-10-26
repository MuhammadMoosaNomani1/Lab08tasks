#include<stdio.h>
int main(){
	int image[2][2][3]={{{100,150,200},{50,100,150}},{{80,120,160},{40,60,80}}};
	int rows=2, cols=2;
	int sum=0;
	int count=0;
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			for(int k=0;k<3;k++){
		sum=sum+image[i][j][k];
		count++;
				}		
			}
	}
	
	float average= (float)sum/count;
	printf(" Average Color Intensity = %.2f\n", average);
	return 0;
}
