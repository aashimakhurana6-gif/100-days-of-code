//#include <stdio.h>

int main() {
    int n;
    
    // Input size
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    
    // Input elements
    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max_so_far = arr[0];   // Stores final result
    int current_sum = arr[0];  // Stores current running sum

    for (int i = 1; i < n; i++) {
        // Either extend the current subarray or start new from arr[i]
        if (current_sum + arr[i] > arr[i])
            current_sum = current_sum + arr[i];
        else
            current_sum = arr[i];

        // Update the global maximum
        if (current_sum > max_so_far)
            max_so_far = current_sum;
    }

    printf("Maximum subarray sum = %d\n", max_so_far);

    return 0;
}
