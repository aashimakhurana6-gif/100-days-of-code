//Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.
#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    long long S = (long long)n * (n + 1) / 2;  // total sum
    long long x = sqrt(S);                    // possible pivot

    if (x * x == S)   // check if perfect square
        printf("%lld\n", x);
    else
        printf("-1\n");

    return 0;
}
