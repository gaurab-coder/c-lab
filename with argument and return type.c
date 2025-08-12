#include<stdio.h>
int mult(int,int);
int main()
{
	int a,b,mul;
	printf("Gaurab khadka\n");
	printf("Enter two numbers:\t");
	scanf("%d%d",&a,&b);
	mul= mult(a,b);
	printf("\n the multiplication is \t%d", mul);
	printf("\n function with  argument and no return value");
	return 0;
}
int mult (int a,int b)
{
	int mul;
	mul=a*b;
	return mul;
}
