//Write a function that accepts a structure as parameter and prints its members.
#include <stdio.h>

struct student {
    int roll;
    char name[50];
    float marks;
};

void printStudent(struct student s) {
    printf("Roll Number: %d\n", s.roll);
    printf("Name: %s\n", s.name);
    printf("Marks: %.2f\n", s.marks);
}

int main() {
    struct student s1 = {101, "Aashima", 92.5};

    printStudent(s1);

    return 0;
}
