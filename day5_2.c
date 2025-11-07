#include <stdio.h>

int main() {
    int totalSeconds;
    int hours, minutes, seconds;

    // Input time in seconds
    printf("Enter time in seconds: ");
    scanf("%d", &totalSeconds);

    // Convert seconds to hours, minutes, and seconds
    hours = totalSeconds / 3600;          // 1 hour = 3600 seconds
    minutes = (totalSeconds % 3600) / 60; // Remaining minutes
    seconds = totalSeconds % 60;          // Remaining seconds

    // Display the result
    printf("Time: %02d:%02d:%02d\n", hours, minutes, seconds);

    return 0;
}
