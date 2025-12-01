//Print initials of a name with the surname displayed in full.
#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int i, len;

    printf("Enter full name: ");
    gets(name);

    len = strlen(name);

    // Print the first initial
    if (name[0] != ' ')
        printf("%c ", name[0]);

    // Print initials for middle names
    for (i = 1; i < len; i++) {
        if (name[i] == ' ' && name[i + 1] != ' ' && i + 1 < len) {
            // Check if this is the last word (surname)
            int j = i + 1;
            int isLast = 1;

            // Check for any more spaces after this word
            while (j < len) {
                if (name[j] == ' ')
                    isLast = 0;
                j++;
            }

            // If last word → print fully
            if (isLast) {
                printf("%s", &name[i + 1]);
                break;
            } else {
                printf("%c ", name[i + 1]);
            }
        }
    }

    return 0;
}
