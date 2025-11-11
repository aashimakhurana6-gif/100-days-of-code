//Write a program to calculate the factorial of a number.
#include <stdio.h>

int main() {
    int n, i;
    long long fact = 1; // use long long to handle large factorials

    // Input number
    printf("Enter a number: ");
    scanf("%d", &n);

    // Check for negative numbers
    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Calculate factorial
        for (i = 1; i <= n; i++) {
            fact *= i;
        }
        printf("Factorial of %d = %lld\n", n, fact);
    }

    return 0;
}
