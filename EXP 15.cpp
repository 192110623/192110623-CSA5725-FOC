#include <stdio.h>

int main() {
    int num, digit, sum = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Negative numbers are not allowed.\n");
        return 1;
    }

    while (num > 0) {
        digit = num % 10;
        sum += digit;
        num /= 10;
    }

    printf("Sum of the digits of the entered integer is: %d\n", sum);

    return 0;
}

