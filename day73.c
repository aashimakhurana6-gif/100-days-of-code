//Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char ch;
    int characters = 0, words = 0, lines = 0;
    int inWord = 0;

    // Open the file in read mode
    fp = fopen("info.txt", "r");

    if (fp == NULL) {
        printf("Error: Could not open the file.\n");
        return 1;
    }

    // Read each character until EOF
    while ((ch = fgetc(fp)) != EOF) {
        characters++;

        // Count lines
        if (ch == '\n')
            lines++;

        // Check for word boundaries
        if (isspace(ch)) {
            inWord = 0;   // We are outside a word
        } else {
            if (inWord == 0) {
                words++;   // New word begins
                inWord = 1;
            }
        }
    }

    // Close the file
    fclose(fp);

    // Edge case: if file doesn't end with a newline
    if (characters > 0 && ch != '\n')
        lines++;

    // Display the results
    printf("Total Characters: %d\n", characters);
    printf("Total Words: %d\n", words);
    printf("Total Lines: %d\n", lines);

    return 0;
}
