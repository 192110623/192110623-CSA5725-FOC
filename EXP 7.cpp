#include <stdio.h>

int main() {
    int n;
    int sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Please enter a positive integer greater than or equal to 1.\n");
        return 1;
    }

    for (int i = 1; i <= n; i += 2) {
        sum += i;
    }

    printf("Sum of odd numbers from 1 to %d is: %d\n", n, sum);

    return 0;
}

