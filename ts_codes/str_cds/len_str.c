#include<stdio.h>
#define len 10
void main()
{
	char arr[len];
	printf("Enter the string:");
	scanf("%s",arr);
	int i,count=0;
	for(i=0;arr[i];i++)
	{	
		count++;
	}
	printf("length of string:%d\n",count);
}
