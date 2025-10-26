#include <stdio.h>

void main () {
	int f,r,b,full=0,empty=0, i,j,k;
	
	printf("Enter number of floors: ");
	scanf("%d",&f);
	printf("Enter number of rooms: ");
	scanf("%d",&r);
	printf("Enter number of beds: ");
	scanf("%d",&b);
	
	int build[f][r][b];
	
	for (i = 0; i < f; i++){
		for (j = 0; j < r; j++) {
			for (k = 0; k < b; k++) {
				printf("Enter bed status (0 or 1) for %d Floor, %d Room and %d Bed: ",i+1,j+1,k+1);
				scanf("%d",&build[i][j][k]);
			}
		}
	}
	
	printf("Building Structure: \n");
	for (i = 0; i < f; i++){
		for (j = 0; j < r; j++) {
			for (k = 0; k < b; k++) {
				printf("%d ",build[i][j][k]);
				
			} printf("\n");
		} printf("\n");
	}
	for (i = 0; i < f; i++){
		for (j = 0; j < r; j++) {
			for (k = 0; k < b; k++) {
				if (build[i][j][k] == 0) {
					empty++;
				} else if (build[i][j][k] == 1) {
					full++;
				}
				
			}
		}
	}
	
	printf("\nThe number of empty beds are: %d",empty);
	printf("\nThe number of full beds are: %d",full);
	
}
