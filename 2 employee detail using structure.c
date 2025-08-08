#include<stdio.h>
#include<conio.h>
struct employee
{
	char name[20];
		int age;
	float salary;
}e1,e2;
int main()
{
	printf("Gaurab khadka \n");
	printf("Enter the record of two employee:");
	
	scanf("%s%d%f",e1.name,&e1.age,&e1.salary);
	scanf("%s%d%f",e2.name,&e2.age,&e2.salary);
	printf("Employee details");
	scanf("%s%d%f",e1.name,e1.age,e1.salary);
	scanf("%s%d%f",e2.name,e2.age,e2.salary);
	getch();
return 0;
}
(p)
