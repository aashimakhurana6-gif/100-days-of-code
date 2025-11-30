//Reverse each word in a sentence without changing the word order.
#include <stdio.h>
#include <string.h>

void reverseWord(char str[], int start, int end) {
    char temp;
    while (start < end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char sentence[200];
    int i = 0, start = 0;

    printf("Enter a sentence: ");
    gets(sentence);

    while (1) {
        // When space or end is found, reverse the previous word
        if (sentence[i] == ' ' || sentence[i] == '\0') {
            reverseWord(sentence, start, i - 1);
            start = i + 1; // next word starts after space
        }

        if (sentence[i] == '\0')
            break;

        i++;
    }

    printf("Reversed words: %s\n", sentence);
    return 0;
}
