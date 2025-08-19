#include <stdio.h>
#include <conio.h> // For getch()

// Function prototype for swap using call by value
void swap(int x, int y);

void main() {
    int a = 50, b = 100;
printf("Gaurab khadka Roll no:12\n");
    // Print values before swap function call
    printf("Before swap function call: a = %d and b = %d\n", a, b);

    // Call swap function by value
    swap(a, b);

    // Print values after swap function call
    printf("After swap function call: a = %d and b = %d\n", a, b);

    getch(); // Holds the console window until a key is pressed
}

// Definition of the swap function (call by value)
void swap(int x, int y) {
    int temp;
    temp = x;
    x = y;
    y = temp;

    // Print values within the swap function
    printf("Values within swap: x = %d and y = %d\n", x, y);
}
