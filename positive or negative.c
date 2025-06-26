#include<stdio.h>
#include<conio.h>
int main()
{
int a;
printf("Enter your number:");
scanf("%d", &a);
if(a<0)
{
printf("You have entered negative number");
}
else
{
printf("You have entered positive number");
}
getch();
}
