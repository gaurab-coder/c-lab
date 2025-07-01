#include <stdio.h>

int main() {
    int num, i, j, isPrime;
printf("gaurab khadka\n\n");
    printf("Enter the upper limit to display prime numbers: ");
    scanf("%d", &num);

    printf("Prime numbers up to %d are:\n", num);

    for (i = 2; i <= num; i++) {
        isPrime = 1; // Assume i is prime

        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = 0; // i is not prime
                break;
            }
        }

        if (isPrime) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}

