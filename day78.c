//Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char ch;
    int vowels = 0, consonants = 0;

    // Open the file in read mode
    fp = fopen("info.txt", "r");
    if (fp == NULL) {
        printf("Error: Could not open the file.\n");
        return 1;
    }

    // Read each character
    while ((ch = fgetc(fp)) != EOF) {
        // Convert to lowercase for simplicity
        ch = tolower(ch);

        if (ch >= 'a' && ch <= 'z') { // Check if it is an alphabet
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    fclose(fp);

    // Display results
    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);

    return 0;
}
