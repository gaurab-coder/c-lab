// WAP to print:1,1,2,3,5,8,13,21,34,......

#include<stdio.h>
int main()
{
	int fib1,fib2,prev,next,num;
	
	printf("Gaurab khadka\n");
	fib1=1;
	fib2=1;
	printf("\nEnter number upto which you want fibonacci sequence:\t");
	scanf("%d",&num);
	printf("%d",fib1);
	do{
		next=fib2+prev;
		prev=fib2;
		fib2=next;
		printf(" ,%d",prev);
	}
	while(num>next);
	return 0;
}