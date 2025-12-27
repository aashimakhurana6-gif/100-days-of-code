//Return a structure containing top student's details from a function.
#include <stdio.h>

struct student {
    int roll;
    char name[50];
    int marks;
};

struct student getTopStudent(struct student s[], int n) {
    int i, maxIndex = 0;

    for(i = 1; i < n; i++) {
        if(s[i].marks > s[maxIndex].marks) {
            maxIndex = i;
        }
    }

    return s[maxIndex];
}

int main() {
    struct student s[3] = {
        {1, "Rahul", 85},
        {2, "Aashima", 92},
        {3, "Neha", 88}
    };

    struct student top;

    top = getTopStudent(s, 3);

    printf("Top Student Details:\n");
    printf("Roll: %d\n", top.roll);
    printf("Name: %s\n", top.name);
    printf("Marks: %d\n", top.marks);

    return 0;
}
