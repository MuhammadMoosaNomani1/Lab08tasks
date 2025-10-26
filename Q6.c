#include<stdio.h>
int main(){
	int n, i, j,isIdentity=1;
	printf("Enter size of square matrix: ");
	scanf("%d", &n);
	int matrix[n][n];
	printf("Enter elements (0 or 1): \n");
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
		scanf("%d", &matrix[i][j]);
	}	
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
		if(i==j & matrix[i][j] != 1) isIdentity=0; 
		else if (i!=j & matrix[i][j]!=0) isIdentity=0;  
		}	
	}
	if(isIdentity==1) printf("The matrix is an identity matrix.\n");
	else printf("The matrix is NOT an identity matrix. \n"); 
	return 0;
	}
