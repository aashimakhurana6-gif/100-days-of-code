//Find and print the student with the highest marks.
#include <stdio.h>

struct student {
    char name[50];
    int marks;
};

int main() {
    int n, i, maxIndex = 0;
    struct student s[100];

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", s[i].name);
        printf("Enter marks: ");
        scanf("%d", &s[i].marks);
    }

    for(i = 1; i < n; i++) {
        if(s[i].marks > s[maxIndex].marks) {
            maxIndex = i;
        }
    }

    printf("\nStudent with highest marks:\n");
    printf("Name: %s\n", s[maxIndex].name);
    printf("Marks: %d\n", s[maxIndex].marks);

    return 0;
}
