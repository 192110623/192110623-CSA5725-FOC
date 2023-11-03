#include <stdio.h>

int main() {
    int num, digit;

    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Digits of the entered integer are: ");

    if (num < 0) {
        printf("-");
        num = -num;  
    }

    if (num == 0) {
        printf("0\n");
        return 0;
    }

    while (num > 0) {
        digit = num % 10;
        printf("%d ", digit);
        num /= 10;
    }

    printf("\n");

    return 0;
}

