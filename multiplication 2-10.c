#include <stdio.h>

int main() {
    int i, j;

    // Loop through numbers 2 to 10
    for (i = 2; i <= 10; i++) {
        printf("Multiplication Table for %d:\n", i);
        
        // Inner loop to multiply i by numbers 1 to 10
        for (j = 1; j <= 10; j++) {
            printf("%d x %d = %d\n", i, j, i * j);
        }

        printf("\n"); // Print a blank line between tables
    }

    return 0;
}

