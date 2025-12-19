//A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.
#include <stdio.h>

int main() {
    FILE *fp;
    int num, sum = 0, count = 0;
    float average;

    // Open the file in read mode
    fp = fopen("numbers.txt", "r");
    if (fp == NULL) {
        printf("Error: Could not open numbers.txt\n");
        return 1;
    }

    // Read integers from the file
    while (fscanf(fp, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    fclose(fp);

    if (count == 0) {
        printf("No numbers found in the file.\n");
    } else {
        average = (float)sum / count;
        printf("Sum = %d\n", sum);
        printf("Average = %.2f\n", average);
    }

    return 0;
}
