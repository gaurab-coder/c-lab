#include <stdio.h>
int main()
{
FILE *fp,*fpp;
char c[10];
fp=fopen("C:\\gaurab\\test.txt","r");
if(fp==NULL)
{
printf("Cannot open file");
}
else 
printf(" test file is opened\n");
fpp=fopen("C:\\gaurab\\hello.txt","w");
if(fpp==NULL)
{
printf("Cannot create file");

}
else
printf("another text file created");
while(fscanf(fp,"%s",c)!= EOF)
{
if((strcmp(c,"three")!=0)&&(strcmp(c,"bad")!=0)&&(strcmp(c,"time")!=0))
{
fprintf(fpp,"%s ",c);
}
}
fclose(fp);
fclose(fpp);
getch();
}
