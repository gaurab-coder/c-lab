#include <stdio.h>
int main()
{
    struct book
    {
        char name[20];
        int pages;
        float price;
    } b[5];

    int i;
      printf("Gaurab Khadka Roll no:12\n");
    printf("Enter the records of five books:");
    for(i = 0; i < 5; i++)
    {
        scanf("%s %d %f", b[i].name, &b[i].pages, &b[i].price);
    }
    printf("Book details:\n");
    for(i = 0; i < 5; i++)
    {
        printf("%s\t%d\t%2f", b[i].name, b[i].pages, b[i].price);
        printf("\n");
    }
    return 0;
}

