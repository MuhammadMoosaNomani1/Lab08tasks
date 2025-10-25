#include<stdio.h>
int main(){
	int n;
	printf("Enter number of rows for the Alphabet Pyramid: ");
	if(scanf("%d", &n)!=1 || n<=0){
		printf("Please enter a positive integer.\n");
		return 1;
	}
	char letter = 'A';
	for(int row=1; row<=n; row++){
		for(int s=0;s<n-row;s++){
			printf(" "); 
		}
		for(int cnt=1;cnt<=row;cnt++){
			printf("%c ", letter);
			letter=letter+1;
			if(letter>'Z') letter='A';
		}
		printf("\n");
	}
return 0;	
}
