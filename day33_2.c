//Insert an element in a sorted array at the appropriate position.

#include <stdio.h>

int main() {
    int n, i, j, num;

    printf("Enter number of elements in sorted array: ");
    scanf("%d", &n);

    int arr[100];  // assuming max size 100
    printf("Enter %d sorted elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &num);

    // Find the correct position to insert
    for (i = n - 1; (i >= 0 && arr[i] > num); i--) {
        arr[i + 1] = arr[i];
    }

    arr[i + 1] = num;
    n++;

    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}
