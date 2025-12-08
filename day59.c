//Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.
#include <stdio.h>

int main() {
    int n, k;

    // Input size of array
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input k
    printf("Enter value of k: ");
    scanf("%d", &k);

    // Edge case: if k > n
    if (k > n) {
        printf("Invalid: k cannot be greater than n\n");
        return 0;
    }

    // Step 1: Compute sum of first window
    int windowSum = 0;
    for (int i = 0; i < k; i++) {
        windowSum += arr[i];
    }

    int maxSum = windowSum;

    // Step 2: Slide the window
    for (int i = k; i < n; i++) {
        windowSum += arr[i] - arr[i - k];  // Add new element, remove old
        if (windowSum > maxSum) {
            maxSum = windowSum;
        }
    }

    // Print result
    printf("Maximum sum of subarrays of size %d = %d\n", k, maxSum);

    return 0;
}
