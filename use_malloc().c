#include <stdio.h>
#include <stdlib.h> // For malloc()

int main() {
    int *arr;
    int n, i;
    int max, min;

    printf("Enter the number of integers: ");
    scanf("%d", &n);

    // Allocate memory dynamically
    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Input N integers
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize max and min
    max = min = arr[0];

    // Find max and min
    for (i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }

    // Output results
    printf("Largest number: %d\n", max);
    printf("Smallest number: %d\n", min);

    // Free allocated memory
    free(arr);

    return 0;
}

