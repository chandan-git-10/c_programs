#include<stdio.h>
#include<stdlib.h>
void main()
{
	FILE *srcfp=NULL, *dstfp=NULL;
	int ch;
	if((srcfp=fopen("test.txt","r"))==NULL)
	{
		printf("ERR:Cannot open file\n");
		exit(1);
	}
	if((dstfp=fopen("test_dst.txt","w"))==NULL)
        {
                printf("ERR:Cannot open file\n");
                exit(1);
        }
	while((ch=fgetc(srcfp))!=EOF)
	{
		fputc(ch,dstfp);
	}
	printf("data copied from one file to another file\n");
	fclose(srcfp);
	fclose(dstfp);
}


