#define MAX 100
int main(){
	int marks[MAX][MAX], transposed[MAX][MAX];
	int students, subjects;
	int i,j;
	printf("Enter number of students");
	scanf("%d", &students);
	printf("Enter number of subjects");
	scanf("%d", &subjects);
	printf("\nEnter marks for each student\n");
	for(i=0;i<students;i++){
	printf("Student : %d", i+1);
	for(j=0;j<subjects;j++){
		printf(" Subject %d: ", j+1);
		scanf("%d", &marks[i][j]);
	}
	}
	for(i=0;i<students;i++){
		for(j=0;j<subjects;j++){
			transposed[j][i]=marks[i][j];
		}
	}
	printf("\nOriginal Marks Table (students x subjects):\n");
	for(i=0;i<students;i++){
		for(j=0;j<subjects;j++){
			printf("%5d ", marks[i][j]);
		}
		printf("\n");
	}
	printf("\nTransposed Marks Table (Subjects x Students):\n");
		for(i=0;i<subjects;i++){
		for(j=0;j<students;j++){
			printf("%5d ", transposed[i][j]);
		}
		printf("\n");
	}
	return 0;
}
