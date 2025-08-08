#include<stdio.h>
int main()
{
	int a[100],i,n,c=0;
	printf("How many numbers\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	printf("Enter the age:");
	scanf("%d",&a[i]);
	if(a[i]>15 && a[i]<22)
	{
		c=c+1;
	}	
	}
	printf("The number of students with age 15-22 is: %d\n",c);
	return 0;
}
