//Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.
#include <stdio.h>

int main() {
    FILE *fp;
    int n, i;
    char name[50];
    int roll;
    float marks;

    // Open file in write mode to store student records
    fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("Error: Could not create file.\n");
        return 1;
    }

    printf("Enter number of students: ");
    scanf("%d", &n);

    // Input and write records to file
    for (i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Enter name: ");
        scanf(" %[^\n]", name); // Read full name with spaces
        printf("Enter roll number: ");
        scanf("%d", &roll);
        printf("Enter marks: ");
        scanf("%f", &marks);

        fprintf(fp, "%s %d %.2f\n", name, roll, marks);
    }

    fclose(fp);

    // Open file in read mode to display student records
    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }

    printf("\nStored Student Records:\n");
    printf("------------------------\n");
    while (fscanf(fp, "%s %d %f", name, &roll, &marks) == 3) {
        printf("Name: %s, Roll: %d, Marks: %.2f\n", name, roll, marks);
    }

    fclose(fp);

    return 0;
}
