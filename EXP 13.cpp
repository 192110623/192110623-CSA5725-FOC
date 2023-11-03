#include <stdio.h>

int main() {
    int n, sum = 0;
    double average;

    printf("Enter the number of elements (n): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer for n.\n");
        return 1;
    }

    printf("Enter %d numbers:\n", n);

    for (int i = 0; i < n; i++) {
        int number;
        scanf("%d", &number);
        sum += number;
    }

    average = (double)sum / n;

    printf("Sum of %d numbers is: %d\n", n, sum);
    printf("Average of the %d numbers is: %.2f\n", n, average);

    return 0;
}

