#include<stdio.h>
int main()
{
	int i,stock[5];
	float price[5];
	float total=0;
	for(i=0;i<5;i++)
	{
		printf("Enter stock of bulb %d:",i+1);
		scanf("%d",&stock[i]);
			printf("Enter price of bulb %d:",i+1);
		scanf("%f",&price[i]);
		total=total+stock[i]*price[i];
			}
			printf("The total stock value is %2f\n",total);
			return 0;
}
