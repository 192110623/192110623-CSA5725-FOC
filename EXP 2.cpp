#include <stdio.h>

int main() {
    int n;
    
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    if (n < 2) {
        printf("Please enter a positive integer greater than or equal to 2.\n");
        return 1;
    }

    printf("Even numbers from 2 to %d:\n", n);
    
    for (int i = 2; i <= n; i += 2) {
        printf("%d ", i);
    }
    
    printf("\n");
    
    return 0;
}

