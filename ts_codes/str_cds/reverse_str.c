#include<stdio.h>
#include<string.h>
#define len 10
void  main()
{
	char str[len],i,j,L,temp[len];
	printf("enter the string:");
	scanf("%s",str);
	L=strlen(str);
	for(i=0,j=L-1;i<L;i++,j--)
	{
		
		temp[i]=str[j];
	}
	temp[i]=='\0';
	printf("the str and rstr:");
	printf("str=%s rstr=%s\n",str,temp);
}
