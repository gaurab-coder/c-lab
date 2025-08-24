#include <stdio.h>

int main() {
    int i, j, space;
    int rows = 5;

    for(i = rows; i >= 1; i--) {
        // Print spaces
        for(space = 1; space < i; space++) {
            printf(" ");
        }
        // Print numbers from i to rows
        for(j = i; j <= rows; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
