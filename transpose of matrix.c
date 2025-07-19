#include <stdio.h>

int main() 
{
	int matrix[3][3],trans[3][3],i,j;
	printf("Gaurab khadka Roll no:12\n");
	printf("Enter the elements of matrix\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&matrix[i][j]);
		}
	}
	printf("the original matrix is\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",matrix[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			trans[i][j]=matrix[j][i];
		}
	}
	printf("The transpose of matrix is:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",trans[i][j]);
		}
		printf("\n");
	}
	return 0;
}
	
