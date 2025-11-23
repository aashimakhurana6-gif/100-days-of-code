//Check if a matrix is symmetric.
#include <stdio.h>

int main() {
    int n, i, j, symmetric = 1;

    printf("Enter the size of the square matrix (n × n): ");
    scanf("%d", &n);

    int matrix[100][100];

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check for symmetry: A[i][j] == A[j][i]
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                symmetric = 0;
                break;
            }
        }
        if (!symmetric)
            break;
    }

    if (symmetric)
        printf("The matrix is symmetric.\n");
    else
        printf("The matrix is not symmetric.\n");

    return 0;
}
