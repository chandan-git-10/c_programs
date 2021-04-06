#include<stdio.h>
#define len 5
void main()
{
	int arr[len]={1,2,3,4,5};
	int *ptr=arr,i,j,temp;
	printf("array elements:");
	for(i=0;i<len;i++)
	{
		printf("%d",*(ptr+i));
	}
	printf("\n");
	for(i=0,j=len-1;i<j;i++,j--)
	{
		temp=*(ptr+i);
		*(ptr+i)=*(ptr+j);
		*(ptr+j)=temp;
	}
	printf("array after rev:");
	for(i=0;i<len;i++)
	{
		printf("%d",*(ptr+i));
	}
	printf("\n");
}
