#include <stdio.h>

int main() {
    int n, i;
    unsigned long long fact = 1;

    printf("Enter a non-negative integer: ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid input!\n");
        return 1;
    }

    if (n < 0) {
        printf("Error! Factorial of a negative number doesn't exist.\n");
    } else {
        for (i = 1; i <= n; ++i) {
            fact *= i;
        }
        printf("%d! = %llu\n", n, fact);
    }

    return 0;
}

