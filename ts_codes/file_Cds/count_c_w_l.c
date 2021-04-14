#include<stdio.h>
#include<stdlib.h>
void main()
{
	int ch,c_count=0,w_count=0,l_count=0;
	FILE *fp=NULL;
	if((fp=fopen("test.txt","r"))==NULL)
        {
                printf("ERR: cannot open file\n");
                exit(1);
        }
        while((ch=fgetc(fp))!=EOF)
        {
		printf("%c",ch);
	}
	fclose(fp);
	if((fp=fopen("test.txt","r"))==NULL)
	{
		printf("ERR: cannot open file\n");
		exit(1);
	}
	while((ch=fgetc(fp))!=EOF)
	{
		c_count++;
		
		if(ch==' ' || ch== '\t' || ch=='\0' || ch=='\n')
			w_count++;
		if(ch=='\n')
			l_count++;

	}
	fclose(fp);
	printf("no of char=%d words=%d and lines=%d in file\n",c_count,w_count,l_count);
}

