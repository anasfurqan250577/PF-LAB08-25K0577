#include<stdio.h>
void main(){
	int i,j,k, avg, sum=0;
	int rgb[2][2][3];
	
	printf("You can enter values between 0-255\n\n");
	for (i=0; i<2; i++) {
		for(j=0; j<2; j++) {
			for(k=0; k<3; k++) {
				printf("Enter values for RGB Array[%d][%d][%d]: ", i, j, k);
				scanf("%d", &rgb[i][j][k]);
				sum += rgb[i][j][k];
			}
		}
	}
	
	printf("\nRGB Array: \n");
	for (i=0; i<2; i++) {
		for(j=0; j<2; j++) {
			for(k=0; k<3; k++) {
				printf("%d ", rgb[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}
	
	avg = sum/(2*2*3);
	printf("The Average color intensity is : %d", avg);
}
