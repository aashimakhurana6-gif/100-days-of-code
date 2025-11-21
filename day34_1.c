//Insert an element in an array at a given position.
#include <stdio.h>

int main() {
    int n, i, pos, num;

    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    int arr[100];  // assuming max size 100
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &num);

    printf("Enter the position to insert (1 to %d): ", n + 1);
    scanf("%d", &pos);

    if (pos < 1 || pos > n + 1) {
        printf("Invalid position!\n");
    } else {
        // Shift elements to the right
        for (i = n; i >= pos; i--) {
            arr[i] = arr[i - 1];
        }

        arr[pos - 1] = num;  // insert element
        n++;

        printf("Array after insertion:\n");
        for (i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}
