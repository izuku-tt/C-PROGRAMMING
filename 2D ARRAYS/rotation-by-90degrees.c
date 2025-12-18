#include <stdio.h>
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    int sq;
    printf("Enter the number of rows for square matrix: ");
    scanf("%d", &sq);
    int matrix[sq][sq];
    // Input matrix
    for (int i = 0; i < sq; i++) {
        for (int j = 0; j < sq; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("\nthe original matrix:\n");
    for (int i = 0; i < sq; i++) {
        for (int j = 0; j < sq; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    // Transpose the matrix
    for (int i = 0; i < sq; i++) {
        for (int j = 0; j < sq; j++) {
            if (j > i) {  // Transpose step
                swap(&matrix[i][j], &matrix[j][i]);
            }
        }
    }
    // Reverse each row to achieve 90-degree rotation
    for (int i = 0; i < sq; i++) {
        for (int j = 0; j < sq / 2; j++) { // Reverse row logic
            swap(&matrix[i][j], &matrix[i][sq - 1 - j]);
        }
    }
    printf("\nafter 90 degree rotation:\n");
    // Print the output
    for (int i = 0; i < sq; i++) {
        for (int j = 0; j < sq; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
