#include<stdio.h>
int main(){
	int wards=2, patients=3, vitals=3;
	int data[2][3][3]={{{80,98,120},{75,99,115},{90,100,110}},{{85,97,118},{70,101,112},{95,99,119}}}; 
	for(int w=0; w<wards;w++){
		printf("\n Ward %d:\n", w+1);
		for(int p=0;p<patients;p++){ 
			int rowSum=0;  
			for(int v=0;v<vitals;v++){
				rowSum=rowSum+data[w][p][v]; 
			}
		printf("Patient %d total readings = %d\n", p+1,rowSum);
		}
	for(int v=0;v<vitals;v++){
			int ColSum=0; 
			for(int p=0;p<patients;p++){
				ColSum=ColSum+data[w][p][v]; }
		printf("Vital %d total in this ward = %d\n", v+1,ColSum);
		}	
	}
	return 0;
}



