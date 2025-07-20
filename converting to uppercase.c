#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() 
{
	char str[100];
	int i=0;
	printf("\nEnter a text:");
	gets(str);
	while(str[i]!='\0')
	{
		if(!isspace(str[i]))
		str[i]=str[i]-32;
		i++;
	}
	puts(str);
	return 0;
}
