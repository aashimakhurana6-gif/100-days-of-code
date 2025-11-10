//Write a program to print the product of even numbers from 1 to n.
#include <stdio.h>

int main() {
    int n, i;
    long long product = 1; // use long long to handle large results
    int found = 0;         // to check if there are any even numbers

    // Input n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Calculate product of even numbers
    for (i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            product *= i;
            found = 1;
        }
    }

    // Display result
    if (found)
        printf("Product of even numbers from 1 to %d = %lld\n", n, product);
    else
        printf("No even numbers in the range 1 to %d.\n", n);

    return 0;
}
