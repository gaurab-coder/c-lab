// program to display those student whose addressing is kathmandu
#include <stdio.h>
#include <string.h>

struct Person {
    char name[50];
    int age;
    char address[50];
};

int main() {
    int n, i;
    struct Person people[50];

    printf("Enter number of people: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter details of person %d\n", i + 1);

        printf("Name: ");
        scanf(" %[^\n]", people[i].name);

        printf("Age: ");
        scanf("%d", &people[i].age);

        printf("Address: ");
        scanf(" %[^\n]", people[i].address);
    }

    printf("\n--- People from Kathmandu ---\n");
    for (i = 0; i < n; i++) {
        if (strcmp(people[i].address, "Kathmandu") == 0) {
            printf("Name: %s\n", people[i].name);
        }
    }

    return 0;
}
