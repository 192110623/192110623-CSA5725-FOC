#include <stdio.h>

int main() {
    int n;
    int sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Please enter a positive integer greater than or equal to 2.\n");
        return 1;
    }

    for (int i = 2; i <= n; i += 2) {
        sum += i;
    }

    printf("Sum of even numbers from 2 to %d is: %d\n", n, sum);

    return 0;
}

