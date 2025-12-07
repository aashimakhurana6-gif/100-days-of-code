//Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
#include <stdio.h>

int main() {
    int n;

    // Input size of array
    printf("Enter size of array: ");
    scanf("%d", &n);

    int nums[n], answer[n];

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    // Step 1: Build prefix product
    int prefix = 1;
    for(int i = 0; i < n; i++) {
        answer[i] = prefix;
        prefix *= nums[i];
    }

    // Step 2: Multiply with suffix product
    int suffix = 1;
    for(int i = n - 1; i >= 0; i--) {
        answer[i] *= suffix;
        suffix *= nums[i];
    }

    // Print result
    printf("Product of array except self:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", answer[i]);
    }

    return 0;
}
