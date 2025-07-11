#include<stdio.h>
int main()
{
	int i;
	printf("print a-z using implicit type conversion\n");
	for(i=97;i<=122;i++)
	{
		char ch=i;
		printf("%c\t",ch);
			}
			return 0;
}
