#include<stdio.h>
int main()
{
	int a[4][4],i,j,sum=0;
	printf("Enter elements of matrix:\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
			scanf("%d",&a[i][j]);
			printf("\n");
		}
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		sum=sum+a[i][j];
	printf("sum of row %d=%d\n",i+1,sum);
}
	return 0;
}
