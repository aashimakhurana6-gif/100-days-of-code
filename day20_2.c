//Write a program to find the 1’s complement of a binary number and print it.
#include <stdio.h>

int main() {
    long long binary, onesComplement = 0, place = 1;
    int bit;

    // Input binary number
    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    // Compute 1's complement
    while (binary != 0) {
        bit = binary % 10;            // extract last bit (0 or 1)
        if (bit == 0)
            onesComplement += 1 * place; // flip 0 → 1
        // if bit == 1, flipped to 0 (so no addition needed)
        binary /= 10;
        place *= 10;
    }

    // Display result
    printf("1's complement = %lld\n", onesComplement);

    return 0;
}
