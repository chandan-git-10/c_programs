#include<unistd.h>
#include<stdio.h>
void main()
{
	char wd[1000];
	printf("%s\n",getcwd(wd,sizeof(wd)));
}

