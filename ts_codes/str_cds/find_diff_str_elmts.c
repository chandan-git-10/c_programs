#include<stdio.h>
#include<ctype.h>
#define len 100
void main()
{
	char str[len],i,alpha=0,digits=0,spchr=0;
	printf("Enter the string:");
	scanf("%s",str);
	for(i=0;str[i];i++)
	{
		if(isalpha(str[i]))
			alpha++;
		else if(isdigit(str[i]))
			digits++;
		else spchr++;
	}
	printf("alpha=%d, digits=%d, spchar=%d\n",alpha,digits,spchr);
}
