#include<stdio.h>
#include<conio.h>
 int main()
{
  printf("Name:Gaurab Khadka Roll No:13\n");
int n,num,r,arm=0;
printf("Enter the number");
scanf("%d", &n);
num=n;
while(num!=0)
{
r=num%10;
arm=arm+r*r*r;
num=num/10;
}
if(n==arm)
printf("%d is armstrong number",n);
else
printf("%d is not armstrong number",n);
getch();
}
