// WAP to print Hailstone series for a given number of terms.
#include <stdio.h>

int main() {
    int start, n, count = 0;
 printf("Gaurab khadka Roll no:13\n");

    printf("Enter the starting number: ");
    scanf("%d", &start);
    printf("Enter the number of terms to print: ");
    scanf("%d", &n);

    printf("Hailstone series: ");
    while (count < n && start != 1) {
        printf("%d ", start);
        if (start % 2 == 0)
            start = start / 2;
        else
            start = 3 * start + 1;
        count++;
    }

    // Ensure '1' is printed if the sequence ends before reaching n terms
    if (count < n) {
        printf("1 ");
        count++;
    }

    printf("\nTotal terms printed: %d\n", count);

    return 0;
}

