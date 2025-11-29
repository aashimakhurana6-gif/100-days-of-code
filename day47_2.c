//Find the longest word in a sentence.
#include <stdio.h>
#include <string.h>

int main() {
    char sentence[200], longest[50], word[50];
    int i = 0, j = 0, maxLen = 0;

    printf("Enter a sentence: ");
    gets(sentence);

    while (1) {
        // Build the current word
        if (sentence[i] != ' ' && sentence[i] != '\0') {
            word[j++] = sentence[i];
        } else {
            word[j] = '\0'; // end the current word

            // Check length
            if (j > maxLen) {
                maxLen = j;
                strcpy(longest, word);
            }

            j = 0; // reset for next word
        }

        if (sentence[i] == '\0')
            break;

        i++;
    }

    printf("Longest word: %s\n", longest);
    printf("Length: %d\n", maxLen);

    return 0;
}
