#include <stdio.h>

int main() 
{
	int mat[3][3],i,j,sum=0;
	printf("Gaurab khadka Roll no:12\n");
	printf("Enter the elements of matrix\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&mat[i][j]);
		}
	}
	printf("sum of diagonal elements of matrix is\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i==j)
			{
				sum=sum+mat[i][j];
			}
		}
	}
	printf("%d",sum);
}
