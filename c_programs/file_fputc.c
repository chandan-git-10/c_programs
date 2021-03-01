#include<stdio.h>
#include<stdlib.h>
void main()
{
	int ch;
	FILE *fp;
	if((fp=fopen("myfile1.txt","w"))==NULL)
	{
		printf("Erro in opening file");
		exit(1);
	}
	printf("enter the text:");
	while((ch=getchar())!=EOF)
		fputc(ch,fp);
	fclose(fp);
}
