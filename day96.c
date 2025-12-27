//Create Employee structure with nested Date structure for joining date and print details.
#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    int id;
    char name[50];
    float salary;
    struct Date joiningDate;
};

int main() {
    struct Employee e;

    e.id = 101;
    e.salary = 35000.50;
    e.joiningDate.day = 15;
    e.joiningDate.month = 8;
    e.joiningDate.year = 2022;

    printf("Enter employee name: ");
    scanf("%s", e.name);

    printf("\nEmployee Details:\n");
    printf("ID: %d\n", e.id);
    printf("Name: %s\n", e.name);
    printf("Salary: %.2f\n", e.salary);
    printf("Joining Date: %d/%d/%d\n",
           e.joiningDate.day,
           e.joiningDate.month,
           e.joiningDate.year);

    return 0;
}
