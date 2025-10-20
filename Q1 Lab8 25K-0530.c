#include<stdio.h>
#define MAX 100
int main(){
	int salesQ1[MAX][MAX], salesQ2[MAX][MAX], totalSales[MAX][MAX];
	int branches, products;
	int i,j;
	printf("Enter number of branches");
	scanf("%d", &branches);
	printf("Enter number of products");
	scanf("%d", &products);
	
	printf("Enter sales data for Quarter 1(in thousands)\n");
	for(int i=0;i<branches;i++){
		for(int j=0;j<products;j++){
			printf("Branch %d, Product %d", i+1, j+1);
			scanf("%d", &salesQ1[i][j]);
		}
	}
		printf("Enter sales data for Quarter 2(in thousands)\n");
		for(i=0;i<branches;i++){
		for(int j=0;j<products;j++){
			printf("Branch %d, Product %d", i+1, j+1);
			scanf("%d", &salesQ2[i][j]);
	}
}
for(i=0;i<branches;i++){
		for(int j=0;j<products;j++){
		totalSales[i][j]=salesQ1[i][j]+salesQ2[i][j];
	}
}
printf("Total sales in half year (in thousands)");
for(int i=0;i<branches;i++){
	for(int j=0;j<products;j++){
		printf("\n%d ", totalSales[i][j]);
	}
printf("\n");
}

	return 0;
}
