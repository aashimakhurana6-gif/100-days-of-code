//Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.
#include <stdio.h>

int main() {
    FILE *fp;
    char text[200];

    // Open file in append mode
    fp = fopen("info.txt", "a");

    if (fp == NULL) {
        printf("Error: Could not open the file.\n");
        return 1;
    }

    // Take a line of text from the user
    printf("Enter a line to append: ");
    getchar();  // Clear leftover newline from buffer if needed
    fgets(text, sizeof(text), stdin);

    // Append text to the file
    fputs(text, fp);

    // Close the file
    fclose(fp);

    printf("Line successfully appended to info.txt\n");

    return 0;
}
