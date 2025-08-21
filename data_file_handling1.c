#include <stdio.h>
#include <string.h>   // for strcmp
#include <conio.h>    // for getch()

int main()
{
    FILE *fp, *fpp;
    char c[100];   // bigger buffer to avoid overflow

    // Open input file
    fp = fopen("C:\\gaurab\\test.txt", "r");
    if (fp == NULL)
    {
        printf("Cannot open input file\n");
        return 1;
    }
    else 
        printf("Test file is opened\n");

    // Open output file
    fpp = fopen("C:\\gaurab\\hello.txt", "w");
    if (fpp == NULL)
    {
        printf("Cannot create output file\n");
        fclose(fp);
        return 1;
    }
    else
        printf("Another text file created\n");

    // Read words and filter
    while (fscanf(fp, "%99s", c) != EOF)  // read safely
    {
        if ((strcmp(c, "three") != 0) &&
            (strcmp(c, "bad")   != 0) &&
            (strcmp(c, "time")  != 0))
        {
            fprintf(fpp, "%s ", c);
        }
    }

    fclose(fp);
    fclose(fpp);

    printf("Words have been copied (excluding three, bad, time).\n");

    getch(); // wait for key press before closing (for Turbo C/Windows)
    return 0;
}

