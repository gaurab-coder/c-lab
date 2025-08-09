//program to store data of cricket players
#include <stdio.h>

struct Player {
    char name[50];
    int age;
    char position[30];
    float weight;
};

int main() {
    int n, i;
    struct Player players[50]; // array of structures
    struct Player *ptr;        // pointer to structure

    printf("Enter number of players: ");
    scanf("%d", &n);

    ptr = players; // pointer points to the array

    // Input data
    for (i = 0; i < n; i++) {
        printf("\nEnter details of player %d\n", i + 1);

        printf("Name: ");
        scanf(" %[^\n]", (ptr + i)->name); // using pointer

        printf("Age: ");
        scanf("%d", &(ptr + i)->age);

        printf("Position: ");
        scanf(" %[^\n]", (ptr + i)->position);

        printf("Weight: ");
        scanf("%f", &(ptr + i)->weight);
    }

    // Display data
    printf("\n--- Player Details ---\n");
    for (i = 0; i < n; i++) {
        printf("\nPlayer %d:\n", i + 1);
        printf("Name     : %s\n", (ptr + i)->name);
        printf("Age      : %d\n", (ptr + i)->age);
        printf("Position : %s\n", (ptr + i)->position);
        printf("Weight   : %.2f kg\n", (ptr + i)->weight);
    }

    return 0;
}
