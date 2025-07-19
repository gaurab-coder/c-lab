#include <stdio.h>

int main() 
{
	char city[9]={'N','E','W',' ','Y','O','R','K','\0'};
	printf("Gaurab khadka Roll no:12\n");
	int i=0;
	while(city[i]!='\0')
	{
		printf("%c\t",city[i]);
		i++;
	}
	return 0;
}
