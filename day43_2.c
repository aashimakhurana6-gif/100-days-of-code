//Check if a string is a palindrome.
#include <stdio.h>

int main() {
    char str[200];
    int i = 0, j, length = 0, flag = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Find length manually
    while (str[length] != '\0') {
        length++;
    }

    // Remove newline added by fgets
    if (str[length - 1] == '\n') {
        length--;
    }

    // Two-pointer check
    j = length - 1;

    while (i < j) {
        if (str[i] != str[j]) {
            flag = 0;   // not a palindrome
            break;
        }
        i++;
        j--;
    }

    if (flag == 1)
        printf("The string is a palindrome.\n");
    else
        printf("The string is NOT a palindrome.\n");

    return 0;
}
