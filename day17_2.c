//Write a program to check if a number is prime.
#include <stdio.h>

int main() {
    int num, i, isPrime = 1;  // assume number is prime

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Handle numbers less than 2
    if (num <= 1) {
        printf("%d is not a prime number.\n", num);
        return 0;
    }

    // Check divisibility
    for (i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            isPrime = 0; // not prime
            break;
        }
    }

    // Display result
    if (isPrime)
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    return 0;
}
