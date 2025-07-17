#include<stdio.h>
int main()
{
	int array[2][3],i,j;
	printf("Gaurab khadka Roll no:12");
	printf("\nEnter the elements of 2d array\n");
	for(i=0;i<2;i++)
	{
	for(j=0;j<3;j++)
	{
		scanf("%d",&array[i][j]);
	}
}
printf("the elements of 2d array are:\n");
for(i=0;i<2;i++)
{
	for(j=0;j<3;j++)
	{
		printf("\t%d",array[i][j]);
	}
	printf("\n");
}
return 0;
}
