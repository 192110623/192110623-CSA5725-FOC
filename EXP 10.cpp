#include <stdio.h>

int main() {
    int n;
    int sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    for (int i = 1; i <= n; i++) {
        sum += i * i * i;
    }

    printf("Sum of cubes of the first %d numbers is: %d\n", n, sum);

    return 0;
}

