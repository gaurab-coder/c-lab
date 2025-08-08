// program to calculate average weight of people
#include <stdio.h>

int main(void) {
	int i;
    double weights[5];
    double sum = 0.0, average;

    printf("Enter the weights of 5 persons (in kg):\n");
    for ( i = 0; i < 5; i++) {
        printf("Weight of person %d: ", i + 1);
        scanf("%lf", &weights[i]);
        sum += weights[i];
    }

    average = sum / 5.0;

    printf("\nTotal weight = %.2f kg\n", sum);
    printf("Average weight = %.2f kg\n", average);

    return 0;
}

