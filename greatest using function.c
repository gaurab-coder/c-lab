#include <stdio.h>

// Function declaration
int findGreatest(int a, int b, int c);

int main() {
    int num1, num2, num3, greatest;

    // Input three numbers
    printf("Enter first number: ");
    scanf("%d", &num1);
    
    printf("Enter second number: ");
    scanf("%d", &num2);
    
    printf("Enter third number: ");
    scanf("%d", &num3);

    // Call function to find greatest number
    greatest = findGreatest(num1, num2, num3);

    // Print result
    printf("The greatest number is: %d\n", greatest);

    return 0;
}

// Function definition
int findGreatest(int a, int b, int c) {
    if (a >= b && a >= c)
        return a;
    else if (b >= a && b >= c)
        return b;
    else
        return c;
}

