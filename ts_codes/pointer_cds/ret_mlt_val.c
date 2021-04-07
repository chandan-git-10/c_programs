#include<stdio.h>
#define len 5

int *ret_arr(int *ptr)
{
	int i;
	printf("enter the arr elements");
	for(i=0;i<len;i++)
	{
	scanf("%d",ptr+i);
	}
	return ptr;
}

void main()
{
	int i;
	int arr[len],*ptr=arr;
	ret_arr(ptr);
	printf("array elements:");
	for(i=0;i<len;i++)
	{
		printf("%d ",*(ptr+i));
	}
	printf("\n");
}
