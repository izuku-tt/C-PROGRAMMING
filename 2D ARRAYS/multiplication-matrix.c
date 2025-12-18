#include <stdio.h>
int main() {
    int m,n,p; 
    printf("Enter the number of row of first matrix: ");
    scanf("%d", &m);
    printf("enter the value for number of column of first matrix and row of second matrix:");
    scanf("%d",&n);
    printf("enter the number of colummn for second matrix:");
    scanf("%d",&p);
    if (m <= 0 || n <= 0 || p <= 0){
        printf("Matrix dimensions must be greater than zero.\n");
        return 1;
    }
    int matrix1[m][n],matrix2[n][p];
    printf("Input for first matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("Input for second matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }
    // Display first matrix
    printf("first matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix1[i][j]);
        }
        printf("\n");
    }   
    // Display second matrix
    printf("second matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            printf("%d ", matrix2[i][j]);
        }
        printf("\n");
    }
    int result[m][p];
    // Initialize result matrix to 0
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            result[i][j] = 0;
        }
    }
    int cr = n;
    // Matrix multiplication
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < p; j++) {
            for(int k = 0; k < cr; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    // Display result matrix
    printf("Display result matrix\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}