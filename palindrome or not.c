#include<stdio.h>
#include<conio.h>
main()
{ 
printf("Gaurab khadka Roll no:13\n");
int n,num,r,rev=0;
printf("enter the number");
scanf("%d", &n);
num=n;
while(num!=0)
{
r=num%10;
rev=rev*10+r;
num=num/10;
}
if(n==rev)
printf("%d is palindrame number",n);
else
printf("%d is not palindrame number",n);
getch();
}
