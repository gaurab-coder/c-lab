// Print the record in ascending order of the employee-id, file named "employee.dat".
#include <stdio.h>
#define NULL 0

int main()
{
    struct record
    {
        int employee_id;
        char name[20];
        char designation[20];
        float salary;
    };

    struct record employee, t;
    struct record temp[100];
    FILE *fp;
    char ch;
    int count = 0, i, j;

    fp = fopen("employee.dat", "wb+");
    if (fp == NULL)
        printf("\nError - Cannot open the destination file\n");
    else
    {
        printf("Enter employee information:\n");
        do
        {
            printf("Enter id:");
            scanf("%d", &employee.employee_id);
            printf("Enter name:");
            scanf("%s", employee.name);
            
            printf("Enter designation:");
            scanf("%s", employee.designation);
            printf("Enter salary:");
            scanf("%f", &employee.salary);
            fwrite(&employee, sizeof(struct record), 1, fp);
            printf("Do you want to add another record? (y/n):");
            scanf(" %c", &ch);
        } while (ch != 'n');

        rewind(fp);
        fread(&employee, sizeof(struct record), 1, fp);
        while (!feof(fp))
        {
            temp[count] = employee;
            fread(&employee, sizeof(struct record), 1, fp);
            count++;
        }
        fclose(fp);

        for (i = 0; i < count - 1; i++)
        {
            for (j = 0; j < count - 1 - i; j++)
            {
                if (temp[j].employee_id > temp[j + 1].employee_id)
                {
                    t = temp[j];
                    temp[j] = temp[j + 1];
                    temp[j + 1] = t;
                }
            }
        }

        printf("\nSorted list is :\n");
        for (i = 0; i < count; i++)
        {
            printf("Employee id : %d\n", temp[i].employee_id);
            printf("Name : %s\n", temp[i].name);
            printf("Designation : %s\n", temp[i].designation);
            printf("salary : %.2f\n", temp[i].salary);
        }
    }
    return 0;
}

