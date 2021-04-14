#include<stdio.h>
#include<stdlib.h>
void main()
{
	FILE *fp=NULL;
	int ch;
	///reading the file data.
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
	///appending data to file.
	if((fp=fopen("test.txt","a"))==NULL)
	{
		printf("ERR:Cannot open file\n");
		exit(1);
	}
	printf("enter the data:");  //press cntrl+Z or cntrl+D for eof signal.
	while((ch=getchar())!=EOF)
	{
		fputc(ch,fp);
	}
	fclose(fp);
}


