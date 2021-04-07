#include<stdio.h>
#define len 100
void main()
{
	char arr[len];
	char *ptr=arr,i,count=0;
	printf("enter the string:");
	puts(ptr);
	printf("string is:");
	printf("%s",ptr);
	printf("\n");
	for(i=0;ptr[i];i++)
	{
		count++;
	}
	printf("str length is:%d\n",count);
}
