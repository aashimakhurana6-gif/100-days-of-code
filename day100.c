//Use pointer to struct to modify and display data using -> operator.
#include <stdio.h>

struct Student {
    int roll;
    float marks;
};

int main() {
    struct Student s;
    struct Student *ptr;

    ptr = &s;

    ptr->roll = 101;
    ptr->marks = 89.5;

    printf("Student Details:\n");
    printf("Roll Number: %d\n", ptr->roll);
    printf("Marks: %.2f\n", ptr->marks);

    return 0;
}
