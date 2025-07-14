#include<stdio.h>
int main()
{
	int x;
	
	printf("Gaurab khadka\n");
	for(x=1;x<=10;x++)
	{
		if(x>4)
		break;
		printf("%d\t",x);
	}
	printf("\nNext executed\n");
	return 0;
}
