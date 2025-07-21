#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() 
{
	char x[ ]="Happy New Year 2082!!";
char y[ 10],z[50];
	printf("original string:%s\n",x);
	strcpy(y,x);
	printf("copied string:%s\n",y);
	
	return 0;
}
