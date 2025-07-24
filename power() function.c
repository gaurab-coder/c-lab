#include <stdio.h>

// Function to compute x raised to the power p
double power(double x, int p) {
    double result = 1.0;
    int i;

    if (p > 0) {
        for (i = 0; i < p; i++)
            result *= x;
    } else if (p < 0) {
        for (i = 0; i < -p; i++)
            result *= x;
        result = 1.0 / result;
    } else {
        result = 1.0;  // x^0 = 1 for any x ? 0
    }

    return result;
}

int main() {
    double base;
    int exponent;

    // Input base and exponent from user
    printf("Enter base (x): ");
    scanf("%lf", &base);

    printf("Enter exponent (p): ");
    scanf("%d", &exponent);

    // Call the power function
    double result = power(base, exponent);

    // Display the result
    printf("%.2lf raised to the power %d is: %.5lf\n", base, exponent, result);

    return 0;
}

