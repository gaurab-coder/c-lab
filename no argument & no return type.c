#include<stdio.h>
void mul();
void main()
{
	printf("Gaurab khadka\n");
	mul();
	
	printf("\n function with no argument and no return value");
	return 0;
}
void mul ()
{
	int a,b,s;
	printf("Enter two numbers:");
	scanf("%d%d",&a,&b);
	s=a*b;
	printf("mul=%d",s);
}
