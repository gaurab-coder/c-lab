#include<stdio.h>
int main()
{
	int x;
	
	printf("Gaurab khadka\n");
	for(x=1;x<=5;x++)
	{
		if(x==3)
		continue;
		printf("%d\t",x);
	}
	printf("\nfinished loop\n");
	return 0;
}
