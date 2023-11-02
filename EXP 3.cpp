#include <stdio.h>

int main() {
    int n;
    
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    if (n < 1) {
        printf("Please enter a positive integer greater than or equal to 1.\n");
        return 1;
    }

    printf("Odd numbers from 1 to %d:\n", n);
    
    for (int i = 1; i <= n; i += 2) {
        printf("%d ", i);
    }
    
    printf("\n");
    
    return 0;
}

