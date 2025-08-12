#include<stdio.h>
void mul(int,int);
int main()
{
	int a,b;
	printf("Gaurab khadka\n");
	printf("Enter two numbers:");
	scanf("%d%d",&a,&b);
	mul(a,b);
	printf("\n function with  argument and no return value");
	return 0;
}
void mul (int a,int b)
{
	int s;
	s=a*b;
	printf("\n the multiplication is %d",s);
}
