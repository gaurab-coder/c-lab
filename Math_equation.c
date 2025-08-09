// program to solve given expression 
#include <stdio.h>
#include <math.h>

int main() {
    double x, y, result;

    printf("Enter value of x: ");
    scanf("%lf", &x);

    printf("Enter value of y: ");
    scanf("%lf", &y);

    result = 5 * x * sqrt(y * y) + 5;

    printf("Result = %.2lf\n", result);

    return 0;
}
