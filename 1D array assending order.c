#include<stdio.h>
int main()
{
	int num[100],i,j,n,temp;
	printf("Gaurab khadka Roll no:12");
	printf("\nHow many numbers you want to sort?");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&num[i]);
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(num[i]>num[j])
			{
				temp=num[i];
				num[i]=num[j];
				num[j]=temp;
			}
		}
	}
	printf("\nThe numbers in assending order are:\n");
	for(i=0;i<n;i++)
	printf("\t %d",num[i]);
	return 0;
}
