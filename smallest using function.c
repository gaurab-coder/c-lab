#include <stdio.h>

// Function declaration
int findSmallest(int a, int b);

int main() {
    int num1, num2, smallest;

    // Input two numbers
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Call function to find smallest number
    smallest = findSmallest(num1, num2);

    // Print result
    printf("The smallest number is: %d\n", smallest);

    return 0;
}

// Function definition
int findSmallest(int a, int b) {
    if (a < b)
        return a;
    else
        return b;
}

