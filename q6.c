#include <stdio.h>
void main(){
	int r, c, i, j;
	printf("Enter the number of rows: ");
	scanf("%d", &r);
	printf("Enter the number of cols: ");
	scanf("%d", &c);
	
	int matrix[r][c], count=0;
	
	
	if(r == c){
		int error = 1;
	
	for(i=0; i<r; i++){
		for(j=0; j<c; j++){
			printf("Enter the value of matrix[%d][%d]: ", i, j);
			scanf("%d", &matrix[i][j]);
			if(matrix[i][j] != 0 && i != j){
				error = 0;
			}
			if(matrix[i][j] == 1 && i == j){
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
	
	if(count == r && error == 1){
		printf("\n\nThis matrix is a identity matrix");
	}
	else{
		printf("\n\nThis matrix is not a identity matrix");
	}
}
else{
	printf("\n\nThis matrix cannot be an identity matrix because rows are not equals to columns");
}
	
}
