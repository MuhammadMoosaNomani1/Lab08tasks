#include<stdio.h>
int main(){
	int rows;
	printf("Enter no. of rows: ");
	scanf("%d", &rows);
	int cols;
	printf("Enter no. of columns: ");
	scanf("%d", &cols);
	int matrix[10][10];
	int countZero=0;
	int i,j;
	printf("Enter the elements of the Matrix: \n");
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
		scanf("%d", &matrix[i][j]);
		if(matrix[i][j]==0) countZero++;
		}	
	}
	
	int totalElements=rows*cols;
	if(countZero > totalElements/2) printf("The matrix is a Sparse Matrix.\n");
	else printf("The matrix is NOT a Sparse Matrix.\n");
	return 0;
}
