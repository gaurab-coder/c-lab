#include <stdio.h>
#include <string.h>
int main() 
{
	char string[100];

	printf("\nEnter a string:");
	gets(string);
	strlwr(string);
	printf("\nstring after strlwr:%s\n",string);
	return 0;
}

