#include <stdlib.h> // Required for malloc and free
#include <stdio.h>  // Required for printf and scanf

int main() {
    int n, i;
    float *p; // Pointer to store the base address of allocated memory
    float sum = 0.0;
    float avg;

    printf("How many courses of a student: ");
    scanf("%d", &n);

    // Clear the input buffer after scanf
    while (getchar() != '\n');

    printf("Enter marks of each course:\n");
    // Dynamically allocate memory for 'n' float values
    p = (float *)malloc(n * sizeof(float));

    // Check if malloc was successful
    if (p == NULL) {
        printf("Memory allocation failed!\n");
        return 1; // Indicate an error
    }

    for (i = 0; i < n; i++) {
        printf("Enter mark for course %d: ", i + 1);
        scanf("%f", (p + i)); // Read marks into allocated memory
    }

    // Calculate sum
    for (i = 0; i < n; i++) {
        sum += *(p + i); // Dereference pointer to add value to sum
    }

    avg = sum / n;

    printf("The sum of the marks: %.2f\n", sum);
    printf("The average marks is: %.2f\n", avg);

    free(p); // Free the dynamically allocated memory
    p = NULL; // Set pointer to NULL after freeing

    return 0;
}
