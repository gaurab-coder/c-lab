#include <stdio.h>
#include <string.h>
int main() 
{
	char string[100];
	printf("\nEnter the string:");
	gets(string);
	strrev(string);
	printf("\nstring after strrev:%s",string);
	return 0;
}
