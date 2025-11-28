//Find the first repeating lowercase alphabet in a string.
#include <stdio.h>

int main() {
    char str[200];
    int freq[26] = {0};
    int i = 0;
    char result = '\0';

    printf("Enter a string (lowercase only): ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        char ch = str[i];

        if (ch >= 'a' && ch <= 'z') {
            freq[ch - 'a']++;

            if (freq[ch - 'a'] == 2) {
                result = ch;
                break;
            }
        }

        i++;
    }

    if (result != '\0')
        printf("First repeating lowercase character: %c\n", result);
    else
        printf("No repeating lowercase alphabet found.\n");

    return 0;
}
