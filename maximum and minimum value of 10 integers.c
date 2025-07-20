#include <stdio.h>
#include <limits.h>

int main(void) {
    int n = 10;
    int arr[10];
    int i, max, min;

    // Read exactly 10 integers
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++)
	 {
        printf("arr[%d]: ", i);
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input.\n");
            return 1;
        }
    }

    // Initialize max and min to the first array element
    max = arr[0];
    min = arr[0];

    // Traverse the remaining elements
    for (i = 1; i < n; i++) {
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }

    // Output results
    printf("\nMaximum: %d\n", max);
    printf("Minimum: %d\n", min);

    return 0;
}

