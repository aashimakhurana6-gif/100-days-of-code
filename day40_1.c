//Perform diagonal traversal of a matrix.
#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter the size of the square matrix (n × n): ");
    scanf("%d", &n);

    int matrix[100][100];

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nDiagonal traversal of the matrix:\n");

    // Print all diagonals starting from the first row
    for (int k = 0; k < n; k++) {
        i = 0;
        j = k;
        while (j >= 0 && i < n) {
            printf("%d ", matrix[i][j]);
            i++;
            j--;
        }
        printf("\n");
    }

    // Print remaining diagonals starting from the last column
    for (int k = 1; k < n; k++) {
        i = k;
        j = n - 1;
        while (i < n && j >= 0) {
            printf("%d ", matrix[i][j]);
            i++;
            j--;
        }
        printf("\n");
    }

    return 0;
}
