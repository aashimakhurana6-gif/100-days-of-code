//Use malloc() to allocate structure memory dynamically and print details.
#include <stdio.h>
#include <stdlib.h>

struct Student {
    int roll;
    float marks;
};

int main() {
    struct Student *s;

    s = (struct Student *)malloc(sizeof(struct Student));

    if (s == NULL) {
        printf("Memory allocation failed");
        return 1;
    }

    printf("Enter roll number: ");
    scanf("%d", &s->roll);

    printf("Enter marks: ");
    scanf("%f", &s->marks);

    printf("\nStudent Details:\n");
    printf("Roll Number: %d\n", s->roll);
    printf("Marks: %.2f\n", s->marks);

    free(s);

    return 0;
}
