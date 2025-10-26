#include<stdio.h>
void main(){
	int sales1[2][2] = {{21,22}, {54,67}};
	int sales2[2][2] = {{75,34}, {54,23}};
	int res[2][2];
	int i,j;
	printf("Total sales of products in half year: \n"); 
	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			res[i][j] = sales1[i][j] + sales2[i][j];
			printf("%d ", res[i][j]);
		}
		printf("\n");
	}
}
