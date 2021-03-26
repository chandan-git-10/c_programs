#include<stdio.h>
#include<string.h>
#define len 10
void  main()
{
	char str[len],i,j,L;
	printf("enter the string:");
	scanf("%s",str);
	L=strlen(str);
	for(i=0,j=L-1;i<L;i++,j--)
	{
		
		if(str[i]!=str[j])
			break;

	}
	if(i<L)
	printf("string is not pallindrome\n");
	else 
	printf("string is pallindrome\n");
		
}
