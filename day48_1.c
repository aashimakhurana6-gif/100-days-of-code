//Check if one string is a rotation of another.
#include <stdio.h>
#include <string.h>

int isRotation(char str1[], char str2[]) {
    // Check length
    if (strlen(str1) != strlen(str2))
        return 0;

    // Create a new string = str1 + str1
    char temp[200];
    strcpy(temp, str1);
    strcat(temp, str1);

    // Check if str2 is a substring of temp
    if (strstr(temp, str2) != NULL)
        return 1;
    else
        return 0;
}

int main() {
    char str1[100], str2[100];

    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    if (isRotation(str1, str2))
        printf("Strings ARE rotations of each other.\n");
    else
        printf("Strings are NOT rotations of each other.\n");

    return 0;
}
