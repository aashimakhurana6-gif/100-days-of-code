//Find the second largest element in an array.
#include <stdio.h>

int main() {
    int n, i;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    int arr[100];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    if (n < 2) {
        printf("Array should have at least two elements.\n");
        return 0;
    }

    int first, second;
    first = second = -999999;  // assume large negative initial value

    for (i = 0; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] < first) {
            second = arr[i];
        }
    }

    if (second == -999999)
        printf("No second largest element (all elements are equal).\n");
    else
        printf("The second largest element is: %d\n", second);

    return 0;
}
