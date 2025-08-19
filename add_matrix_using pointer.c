#include <stdio.h>

int main() {
    int a[2][3], b[2][3], sum[2][3];
    int *p, *q, *r;
    int i, j;

    // Input for first matrix
    printf("Input first matrix elements:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Input for second matrix
    printf("Input second matrix elements:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Assign pointers
    p = &a[0][0];
    q = &b[0][0];
    r = &sum[0][0];

    // Add matrices using pointers
    for (i = 0; i < 2 * 3; i++) {
        *(r + i) = *(p + i) + *(q + i);
    }

    // Print result
    printf("\nThe sum of matrices is:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}

