#include <stdio.h>

// Function declaration
int sum(int a, int b);

int main() {
    int num1, num2, result;

    // Input two numbers from user
    printf("Enter first number: ");
    scanf("%d", &num1);
    
    printf("Enter second number: ");
    scanf("%d", &num2);

    // Call the function
    result = sum(num1, num2);

    // Print the result
    printf("Sum = %d\n", result);

    return 0;
}

// Function definition
int sum(int a, int b) {
    return a + b;
}

