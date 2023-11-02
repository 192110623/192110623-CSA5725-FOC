#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    int first = 0, second = 1, next;

    printf("Fibonacci series up to %d terms:\n", n);

    if (n >= 1) {
        printf("0 ");
    }

    if (n >= 2) {
        printf("1 ");
    }

    for (int i = 3; i <= n; i++) {
        next = first + second;
        printf("%d ", next);
        first = second;
        second = next;
    }

    printf("\n");

    return 0;
}

