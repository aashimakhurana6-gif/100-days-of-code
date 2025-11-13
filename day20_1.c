// Write a program to find the product of odd digits of a number.
#include <stdio.h>

int main() {
    int num, digit, product = 1;
    int hasOdd = 0;  // to check if there are any odd digits

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Handle negative numbers
    if (num < 0)
        num = -num;

    // Find product of odd digits
    while (num != 0) {
        digit = num % 10;
        if (digit % 2 != 0) {   // check if digit is odd
            product *= digit;
            hasOdd = 1;
        }
        num /= 10;
    }

    if (hasOdd)
        printf("Product of odd digits = %d\n", product);
    else
        printf("No odd digits found.\n");

    return 0;
}

 