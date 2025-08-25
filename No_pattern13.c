#include <stdio.h>

int main() {
    int i, j, space;
    int rows = 5;

    for(i = rows; i >= 1; i--) {
        // Print spaces
        for(space = 1; space <= rows - i; space++) {
            printf(" ");
        }
        // Print numbers from 1 to i
        for(j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
