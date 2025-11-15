//Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.
int main() {
    int n;
    float sum = 0.0;
    int numerator = 2, denominator = 3;

    printf("Enter number of terms (n): ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += (float)numerator / denominator;

        numerator += 2;   // numerator increases by 2 each time
        denominator += 4; // denominator increases by 4 each time
    }

    printf("Sum of the series = %.2f\n", sum);

    return 0;
}
