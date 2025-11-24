//Find the sum of main diagonal elements for a square matrix.
#include <stdio.h>

int main() {
    int n, i, j, sum = 0;

    printf("Enter the size of the square matrix (n × n): ");
    scanf("%d", &n);

    int matrix[100][100];

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate sum of main diagonal elements (where i == j)
    for (i = 0; i < n; i++) {
        sum += matrix[i][i];
    }

    printf("\nSum of main diagonal elements = %d\n", sum);

    return 0;
}
