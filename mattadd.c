#include <stdio.h>

int main() {
    int rows, cols, i, j;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    int a[rows][cols];
    int b[rows][cols];
    int sum[rows][cols];
    printf("\n Enter elements of the 1 st matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Enter element a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
   }
    printf("\n Enter elements of the 2  matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Enter element b[%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("\n Resultant Matrix (Sum):\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d\t", sum[i][j]);
        }
        printf("\n"); 
    }
    return 0;
}
