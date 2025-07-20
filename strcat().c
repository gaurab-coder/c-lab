#include <stdio.h>
#include <string.h>
int main() 
{
	char s1[20]="Happy";
	char s2[20]="New Year";
	char s3[20]=" ";
	printf("s1=%s\n s2=%s\n",s1,s2);
	printf("\nstrcat(s1=s2)=%s\n",strcat(s1,s2));
	return 0;
}
