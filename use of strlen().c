#include <stdio.h>
#include <string.h>
int main() 
{
	char str[100];
	int len;
	printf("\nEnter the string:");
	gets(str);
	len=strlen(str);
	printf("\nlength of given string:%d",len);
	return 0;
}
