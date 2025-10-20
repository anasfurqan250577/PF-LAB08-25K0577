#include <stdio.h>
void main(){
	int r, c, i, j;
	printf("Enter the number of rows: ");
	scanf("%d", &r);
	printf("Enter the number of cols: ");
	scanf("%d", &c);
	
	int matrix[r][c], count=0;
	
	for(i=0; i<r; i++){
		for(j=0; j<c; j++){
			printf("Enter the value of matrix[%d][%d]: ", i, j);
			scanf("%d", &matrix[i][j]);
			if(matrix[i][j] == 0){
				count++;
			}
		}
	}
	
	printf("\nMatrix: \n");
	for(i=0; i<r; i++){
		for(j=0; j<c; j++){
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}
	
	if(count > ((r*c)/2)){
		printf("\n\nThis matrix is a sparse matrix");
	}
	else{
		printf("\n\nThis matrix is not a sparse matrix");
	}
}
