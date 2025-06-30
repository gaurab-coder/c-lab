#include <stdio.h>
#include <conio.h>

int main()
{
	printf("Gaurab khadka Roll no:13\n");
    int a, b;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);

    if (a > b)
    {
        printf("a is larger than b");
    }
    else
    {
        printf("b is larger than a");
    }

    getch(); 
    
}

