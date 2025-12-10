//Write a program to take an integer array arr and an integer k as inputs. The task is to find the kth smallest element in the array. Print the kth smallest element as output.
#include <stdio.h>

int main() {
    int n, k;
    
    // Input size of array
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    
    // Input elements
    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Input k
    printf("Enter k: ");
    scanf("%d", &k);

    // Sort array (Selection Sort)
    for (int i = 0; i < n - 1; i++) {
        int min_index = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        // Swap
        int temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }

    // Print k-th smallest element
    if (k >= 1 && k <= n) {
        printf("The %dth smallest element is %d\n", k, arr[k - 1]);
    } else {
        printf("Invalid value of k\n");
    }

    return 0;
}
