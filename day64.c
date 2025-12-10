//Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.
#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    
    printf("Enter a string: ");
    scanf("%s", s);

    int lastIndex[256];  
    for (int i = 0; i < 256; i++)
        lastIndex[i] = -1;    // Initialize all characters as not visited
    
    int maxLen = 0;
    int start = 0;  // Start index of current window

    for (int i = 0; i < strlen(s); i++) {
        if (lastIndex[s[i]] >= start) {
            // Move start to the next of previously repeated character
            start = lastIndex[s[i]] + 1;
        }

        // Update last seen index of current character
        lastIndex[s[i]] = i;

        // Update maximum length
        if (i - start + 1 > maxLen)
            maxLen = i - start + 1;
    }

    printf("%d\n", maxLen);

    return 0;
}
