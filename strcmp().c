#include <stdio.h>
#include <string.h>
int main() 
{
	char str1[30],str2[40];
	int i=0,value;
	printf("\nEnter first string:\t:");
	gets(str1);
	printf("\nEnter second string:\t:");
	gets(str2);
	value=strcmp(str1,str2);
	if(strcmp(str1,str2))
	printf("\nstrings are equal");
    else
    printf("\nstring are unequal");
	return 0;
}
