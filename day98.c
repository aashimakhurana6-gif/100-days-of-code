//Take two structs as input and check if they are identical.
#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char name[50];
    float marks;
};

int main() {
    struct Student s1, s2;

    scanf("%d %s %f", &s1.id, s1.name, &s1.marks);
    scanf("%d %s %f", &s2.id, s2.name, &s2.marks);

    if (s1.id == s2.id &&
        strcmp(s1.name, s2.name) == 0 &&
        s1.marks == s2.marks) {
        printf("Structures are identical");
    } else {
        printf("Structures are not identical");
    }

    return 0;
}
