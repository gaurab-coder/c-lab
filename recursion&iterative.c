#include <stdio.h>

// Recursive function for factorial
long long factorial_recursive(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial_recursive(n - 1);
}

// Iterative function for factorial
long long factorial_iterative(int n) {
    long long fact = 1;
    int i;
    for ( i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num;
    long long factRec, factIter;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 1;
    }

    factRec = factorial_recursive(num);
    factIter = factorial_iterative(num);

    printf("Factorial of %d using recursion: %lld\n", num, factRec);
    printf("Factorial of %d using iteration: %lld\n", num, factIter);

    return 0;
}

