#include<stdio.h>
void main(){
	int readings[2][2][3] = {
		{ {-4, 2, -6}, {3, -7, 4} },
        { {5, -3, 7}, {-8, 9, -1}}
    };
    
    int i,j,k;
    printf("Original Readings: \n");
    for(i=0; i<2; i++){
    	for(j=0; j<2; j++){
    		for(k=0; k<3; k++){
    			printf("%d  ", readings[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}
	
	printf("Normalize(Positive) Readings: \n");
    for(i=0; i<2; i++){
    	for(j=0; j<2; j++){
    		for(k=0; k<3; k++){
    			if(readings[i][j][k] < 0){
    				readings[i][j][k] = -readings[i][j][k];
				}
    			printf("%d  ", readings[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}
}
