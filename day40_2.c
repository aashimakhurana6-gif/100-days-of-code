//Multiply two matrices.
#include <stdio.h>

int main() {
    int r1, c1, r2, c2, i, j, k;

    // Input sizes
    printf("Enter rows and columns for first matrix: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns for second matrix: ");
    scanf("%d %d", &r2, &c2);

    // Check matrix multiplication condition
    if (c1 != r2) {
        printf("Matrix multiplication not possible! (columns of first must equal rows of second)\n");
        return 0;
    }

    int A[100][100], B[100][100], Result[100][100];

    // Input first matrix
    printf("\nEnter elements of first matrix:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Input second matrix
    printf("\nEnter elements of second matrix:\n");
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Initialize result matrix with zeros
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            Result[i][j] = 0;
        }
    }

    // Matrix multiplication logic
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            for (k = 0; k < c1; k++) {
                Result[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Print the result
    printf("\nResultant matrix after multiplication:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            printf("%d ", Result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
