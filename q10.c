#include<stdio.h>
void main(){
	int w,v,p,i,j,k;
	printf("Enter number of hospital wards: ");
	scanf("%d",&w);
	printf("Enter number of patients: ");
	scanf("%d",&p);
	printf("Enter number of vital signs recorded for each patient: ");
	scanf("%d",&v);
	int vital[w][p][v];
	for(i=0;i<w;i++){
		for(j=0;j<p;j++){
			for(k=0;k<v;k++){
				printf("enter vital reading of %d ward %d patient %d vital: ",i+1,j+1,k+1);
				scanf("%d",&vital[i][j][k]);	
			}
			
		}
	}
	printf("MATRIX \n");
	for(i=0;i<w;i++){
		for(j=0;j<p;j++){
			for(k=0;k<v;k++){
				printf("%d\t",vital[i][j][k]);	
			}
			printf("\n");
		}
		printf("\n");
	}
	
	for(i=0;i<w;i++){
		printf("\n----ward %d----\n",i+1);
		for(j=0;j<v;j++){
			int rowsum=0;
			for(k=0;k<p;k++){
				rowsum += vital[i][j][k];
			}
			printf("Sum of vitals of patient %d (Row %d): %d\n", j+1, j+1, rowsum);
		}
		for(k=0;k<p;k++){
			int colsum=0;
			for(j=0;j<v;j++){
				colsum += vital[i][j][k];
			}
			printf("Sum of each vital %d (coloum %d): %d\n", k+1, k+1, colsum);
		}
	}

}
