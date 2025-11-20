//Find the digit that occurs the most times in an integer number.
#include <stdio.h>

int main() {
    long num;
    int digit, count[10] = {0}, max = 0, mostFreq = 0;

    printf("Enter an integer number: ");
    scanf("%ld", &num);

    // Handle negative numbers
    if (num < 0)
        num = -num;

    // Count frequency of each digit
    while (num > 0) {
        digit = num % 10;
        count[digit]++;
        num /= 10;
    }

    // Find the digit with the highest frequency
    for (int i = 0; i < 10; i++) {
        if (count[i] > max) {
            max = count[i];
            mostFreq = i;
        }
    }

    printf("The digit that occurs most is %d (occurs %d times)\n", mostFreq, max);

    return 0;
}
