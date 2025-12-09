//Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.
#include <stdio.h>

int main() {
    int n, k;
    
    // Input array size and k
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter window size k: ");
    scanf("%d", &k);

    int found;

    // Traverse each window
    for (int i = 0; i <= n - k; i++) {
        found = 0;   // To check if a negative number is found in the window

        for (int j = i; j < i + k; j++) {
            if (arr[j] < 0) {
                printf("%d ", arr[j]);
                found = 1;
                break;   // break when first negative found
            }
        }

        if (!found) {
            printf("0 ");
        }
    }

    return 0;
}
