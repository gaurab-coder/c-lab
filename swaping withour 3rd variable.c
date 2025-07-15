#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two numbers:\n");  // Input two numbers
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
    a = a + b; // Swapping without using third variable
    b = a - b;
    a = a - b;

    printf("\nAfter swapping:\n"); // Output the swapped values
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}

