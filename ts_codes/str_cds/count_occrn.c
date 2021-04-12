#include<stdio.h>
#include<string.h>
#define len 100
void main()
{
	char str[len],ch,i,*ptr=str,count;
	printf("Enter the string:");
	gets(ptr);
	printf("enter the char:");
        scanf("%c",&ch);
	for(i=0;ptr[i]!='\0';i++)
	{
		if(*(ptr+i)==ch)
		{
			count++;	
		}
		
	}
	printf("no of occrnc of ch=%c in str=%s is %d\n",ch,str,count);
	
}
