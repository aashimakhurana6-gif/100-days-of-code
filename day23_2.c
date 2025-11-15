/*
Write a program to print the following pattern:
*****
*****
*****
*****
*****
*/
#include <stdio.h>

int main() {
    int i, j;

    // 5 rows
    for (i = 1; i <= 5; i++) {
        // 5 columns
        for (j = 1; j <= 5; j++) {
            printf("*");
        }
        printf("\n"); // move to next line
    }

    return 0;
}
