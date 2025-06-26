// WAP to calculate the area of the triangle in c
#include<stdio.h>

int main()
{
	printf("Name:Gaurab Khadka Roll No:13\n");
	float area, base, height;
	//Getting user Input
	printf("Enter base:\n");
	scanf("%f", &base);
	
	printf("Enter height:\n");
	scanf("%f", &height);
	
	//Calculation
	area= 0.5 * base * height;
	
	//Result
	printf("The area of the triangle is %.2f", area);
	
	return 0;
}
