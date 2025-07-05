#include <stdio.h>

int main()
 {
 	printf("Gaurab khadka\n");
    int n, original, reverse = 0, remainder;
    printf("Enter an integer: ");
    scanf("%d", &n);

    original = n;  // Keep the original value if needed later

    while (n != 0) {
        remainder = n % 10;             // Get last digit
        reverse = reverse * 10 + remainder; // Append digit
        n /= 10;                        // Remove last digit
    }

    printf("Reversed number = %d\n", reverse);
    
    return 0;
}

