#include <stdio.h>

int main() {
    int n;
    int sum = 0;
    int sign = 1;

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    for (int i = 1; i <= n; i++) {
        sum += i * sign;
        sign = -sign; 
    }

    printf("Sum of the series 1 - 2 + 3 - 4 + 5 ... up to %d terms is: %d\n", n, sum);

    return 0;
}

