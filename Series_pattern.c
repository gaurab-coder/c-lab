// program to display and solve series
#include <stdio.h>

int main() {
    double x, sum, fact;
    
    printf("Enter value of X: ");
    scanf("%lf", &x);

    // First term: X
    sum = x;

    // Second term: X / 1!
    fact = 1; // 1! = 1
    sum += x / fact;

    // Third term: X^2 / 2!
    fact = 2; // 2! = 2
    sum += (x * x) / fact;

    printf("Sum = %.2lf\n", sum);

    return 0;
}
