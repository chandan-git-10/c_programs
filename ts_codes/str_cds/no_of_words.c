#include<stdio.h>
#define len 100
void main()
{
	char str[len],i,count=0;
	printf("enter the string:");
	gets(str);
	for(i=0;str[i];i++)
	{
		if(str[i]==' ')
			count++;
	}
	count++;
	printf("No of words in str:%d\n",count);
}

