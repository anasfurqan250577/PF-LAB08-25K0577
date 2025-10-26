#include <stdio.h>
void main(){
	char i, j, s;
	
	for(i=65; i<91; i++){
		for(s=90; s>=i; s--){
			printf(" ");
		}
		for(j=65; j<=i; j++){
			printf(" %c", j);
		}
		printf("\n");
	}
}
