//Store employee data in a binary file using fwrite() and read using fread().
#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee e, e_read;
    FILE *fp;

    // Writing to binary file
    fp = fopen("employee.dat", "wb");
    if (fp == NULL) {
        printf("File cannot be opened\n");
        return 1;
    }

    printf("Enter employee ID: ");
    scanf("%d", &e.id);
    printf("Enter employee name: ");
    scanf("%s", e.name);
    printf("Enter employee salary: ");
    scanf("%f", &e.salary);

    fwrite(&e, sizeof(struct Employee), 1, fp);
    fclose(fp);

    // Reading from binary file
    fp = fopen("employee.dat", "rb");
    if (fp == NULL) {
        printf("File cannot be opened\n");
        return 1;
    }

    fread(&e_read, sizeof(struct Employee), 1, fp);

    printf("\nEmployee Details Read From File:\n");
    printf("ID: %d\n", e_read.id);
    printf("Name: %s\n", e_read.name);
    printf("Salary: %.2f\n", e_read.salary);

    fclose(fp);

    return 0;
}
