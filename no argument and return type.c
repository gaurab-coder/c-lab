#include<stdio.h>
int mult();
int main()
{
	int r;
	r=mult();
	printf("\n the multiplication is \t%d",r);
	printf("\n function with no argument and return value");
	return 0;
}
int mult ()
{
	int m,a,b;
	printf("Gaurab khadka\n");
	printf("Enter two numbers:\t");
	scanf("%d%d",&a,&b);
	m=a*b;
	return m;
}
