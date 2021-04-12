#include<stdio.h>
#include<string.h>
#define len 100
void main()
{
	char str[len],ch,i,*ptr=str;
	printf("Enter the string:");
	gets(ptr);
	printf("enter the char:");
        scanf("%c",&ch);
	for(i=0;ptr[i]!='\0';i++)
	{
		if(*(ptr+i)==ch)
		{
			printf("char ch:%c found at pos:%d\n",ch,i);
			break;
		}
		
	}
	if(*(ptr+i)=='\0')
		printf("char not found\n");
	
}
