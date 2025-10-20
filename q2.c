#include <stdio.h>
void main(){
	int r, c, i, j;
	printf("Enter the number of rows: ");
	scanf("%d", &r);
	printf("Enter the number of cols: ");
	scanf("%d", &c);
	
	int matrix[r][c];
	
	for (i=0; i<r; i++){
		for(j=0; j<c; j++){
			printf("Enter value of matrix[%d][%d]: ", i, j);
			scanf("%d", &matrix[i][j]);	
		}
	}
	
	printf("\nOriginal Matrix: \n");
	for (i=0; i<r; i++){
		for(j=0; j<c; j++){
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}
	
	printf("\nTransposed Matrix: \n");
	for (i=0; i<c; i++){
		for(j=0; j<r; j++){
			printf("%d ", matrix[j][i]);
		}
		printf("\n");
	}
}
