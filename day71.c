//Write a C program that creates a text file named info.txt in write mode. The program should take the user’s name and age as input, and write them to the file using fprintf(). After writing, display a message confirming that the data was successfully saved.
#include <stdio.h>

int main() {
    FILE *fp;
    char name[100];
    int age;

    // Open file in write mode
    fp = fopen("info.txt", "w");

    if (fp == NULL) {
        printf("Error: Could not create the file.\n");
        return 1;
    }

    // Take input from the user
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter your age: ");
    scanf("%d", &age);

    // Write data to the file
    fprintf(fp, "Name: %s", name);
    fprintf(fp, "Age: %d\n", age);

    // Close the file
    fclose(fp);

    // Confirmation message
    printf("Data has been successfully saved to info.txt\n");

    return 0;
}

