#include <stdio.h>
#include <conio.h>

int main()
{

    int a, b, c;
printf("Gaurab khadka Roll No:13\n");
    printf("Enter any three numbers: ");
    scanf("%d%d%d", &a, &b, &c);

    if (a > b && a > c)
    {
        printf("The first number is greatest");
    }
    else if (b > a && b > c)
    {
        printf("The second number is greatest");
    }
    else
    {
 printf("The third number is greatest");
    }

    getch(); 
    return 0;
}
