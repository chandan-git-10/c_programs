#include<stdio.h>
#include<string.h>
#define len 10
void  main()
{
	char str[len],i,j,L,temp[len],*ptr=str;
	printf("enter the string:");
	scanf("%s",ptr);
	L=strlen(ptr);
	for(i=0,j=L-1;i<L;i++,j--)
	{
		
		temp[i]=ptr[j];
	}
	temp[i]=='\0';
	printf("the str and rstr:");
	printf("str=%s rstr=%s\n",ptr,temp);
}
