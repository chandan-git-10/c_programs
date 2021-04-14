#include<stdio.h>
#include<stdlib.h>
void main()
{
	FILE *fp=NULL;
	int ch;
	if((fp=fopen("test.txt","r"))==NULL)
	{
		printf("ERR:Cannot open file\n");
		exit(1);
	}
	printf("data in the file:\n");  
	while((ch=fgetc(fp))!=EOF)
	{
		printf("%c",ch);	
	}
	fclose(fp);
}


