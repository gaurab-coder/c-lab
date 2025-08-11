#include <stdio.h>

int main() {
    char str[200];
    int vowels = 0, consonants = 0, digits = 0;
    int spaces = 0, commas = 0, semicolons = 0;
    int i = 0;

    printf("Enter a line of text: ");
    fgets(str, sizeof(str), stdin); // reads line including spaces

    while (str[i] != '\0') {
        char ch = str[i];

        // Check for vowels (both cases)
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            vowels++;
        }
        // Check for consonants
        else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            consonants++;
        }
        // Check for digits
        else if (ch >= '0' && ch <= '9') {
            digits++;
        }
        // Check for space
        else if (ch == ' ') {
            spaces++;
        }
        // Check for comma
        else if (ch == ',') {
            commas++;
        }
        // Check for semicolon
        else if (ch == ';') {
            semicolons++;
        }
        i++;
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Digits: %d\n", digits);
    printf("Spaces: %d\n", spaces);
    printf("Commas: %d\n", commas);
    printf("Semicolons: %d\n", semicolons);

    return 0;
}

