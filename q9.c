#include <stdio.h>

void main() {
    int c, d, t, high, i, j, k;

    printf("Enter number of cities: ");
    scanf("%d", &c);

    printf("Enter number of days: ");
    scanf("%d", &d);

    printf("Enter number of times you recorded the temperature: ");
    scanf("%d", &t);

    int temp[c][d][t];

    for (i = 0; i < c; i++) {
        for (j = 0; j < d; j++) {
            for (k = 0; k < t; k++) {
                printf("Enter Temp of %d City, %d Day, %d Time: ", i + 1, j + 1, k + 1);
                scanf("%d", &temp[i][j][k]);
            }
        }
    }

    printf("Temp Readings: \n");

    for (i = 0; i < c; i++) {
        for (j = 0; j < d; j++) {
            for (k = 0; k < t; k++) {
                printf("%d ", temp[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    
    high = temp[0][0][0]; 
    for (i = 0; i < c; i++) {
        for (j = 0; j < d; j++) {
            for (k = 0; k < t; k++) {
                if (temp[i][j][k] > high) {
                    high = temp[i][j][k];
                }
            }
        }
    }

    printf("%d is the highest temperature\n", high);

}
