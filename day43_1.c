//Reverse a string.
#include <stdio.h>

int main() {
    char str[200];
    int i = 0, j, temp;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Find length manually
    while (str[i] != '\0') {
        i++;
    }

    // Ignore newline from fgets
    if (str[i-1] == '\n') {
        i--;
    }

    // Reverse using two-pointer method
    for (j = 0; j < i / 2; j++) {
        temp = str[j];
        str[j] = str[i - j - 1];
        str[i - j - 1] = temp;
    }

    printf("Reversed string: %s\n", str);

    return 0;
}
