//Write a program to reverse a given number.
#include <stdio.h>

int main() {
    int num, reversed = 0, remainder;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Reverse the number
    while (num != 0) {
        remainder = num % 10;          // get the last digit
        reversed = reversed * 10 + remainder; // add it to reversed number
        num /= 10;                     // remove the last digit
    }

    // Display result
    printf("Reversed number = %d\n", reversed);

    return 0;
}

