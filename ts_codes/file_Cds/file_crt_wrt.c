#include<stdio.h>
#include<stdlib.h>
void main()
{
	FILE *fp=NULL;
	int ch;
	if((fp=fopen("test.txt","w"))==NULL)
	{
		printf("ERR:Cannot open file\n");
		exit(1);
	}
	printf("enter the charecter:");  //press cntrl+Z or cntrl+D for eof signal.
	while((ch=getchar())!=EOF)
	{
		fputc(ch,fp);
	}
	fclose(fp);
}


