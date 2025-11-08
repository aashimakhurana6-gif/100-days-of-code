//Write a program to input three numbers and find the largest among them using if–else.
#include <stdio.h>

int main() {
    int num1, num2, num3, largest;

    // Input three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Compare numbers to find the largest
    if (num1 >= num2) {
        if (num1 >= num3)
            largest = num1;
        else
            largest = num3;
    } else {
        if (num2 >= num3)
            largest = num2;
        else
            largest = num3;
    }

    // Display the largest number
    printf("The largest number is: %d\n", largest);

    return 0;
}
