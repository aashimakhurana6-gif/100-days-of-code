//Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number
#include <stdio.h>

int main() {
    int n;
    
    printf("Enter n: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements (from 0 to %n, with one missing):\n", n, n);

    long long sum = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    // Total sum of numbers from 0 to n
    long long total = (long long)n * (n + 1) / 2;

    // Missing number
    printf("Missing number: %lld\n", total - sum);

    return 0;
}
