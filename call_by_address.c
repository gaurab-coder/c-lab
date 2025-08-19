#include <stdio.h> // Required for printf
#include <conio.h> // Required for getch()

// Function prototype for swap, taking pointers to integers
void swap(int *x, int *y);

void main() {
    int a = 99, b = 111;
    printf("Gaurab khadka Roll no:12\n");

    // Print values before swap
    printf("Before swap function call: a=%d and b=%d\n", a, b);

    // Call swap function, passing addresses of a and b
    swap(&a, &b);

    // Print values after swap
    printf("After swap function call: a=%d and b=%d\n", a, b);

    getch(); // Holds the console window open until a key is pressed
}

// Definition of the swap function
void swap(int *x, int *y) {
    int temp; // Declare a temporary variable

    temp = *x; // Store the value pointed to by x in temp
    *x = *y;   // Assign the value pointed to by y to the location pointed to by x
    *y = temp; // Assign the value in temp to the location pointed to by y

    // Print values within the swap function (optional, for demonstration)
    printf("Values within swap : x=%d and y=%d\n", *x, *y);
}
