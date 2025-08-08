#include<stdio.h>(p)
#include<conio.h>
void add(int x,int y,int a,int b)
{
	printf("\n The addition of the complex numbers is:%d+i%d",x+a,y+b);
}
void subtract(int x,int y,int a,int b)
{
	printf("\n The subtraction of the complex numbers is:%d+i%d",x-a,y-b);
}
void multiply(int x,int y,int a,int b)
{
	int real,img;
	real=(a*x-b*y);
	img=(a*y+b*x);
	printf("\n The multiplication of the complex numbers is:%d+i%d",x-a,y-b);
}
void main()
{
	int x,y,a,b;
	printf("\n Enter 1st complex number of the form(x+iy):");
	scanf("%d+i%d",&x,&y);
	printf("\n Enter 2nd complex number of the form(a+ib):");
	scanf("%d+i%d",&a,&b);
	add(x,y,a,b);
	subtract(x,y,a,b);
	multiply(x,y,a,b);
	getch();
}
