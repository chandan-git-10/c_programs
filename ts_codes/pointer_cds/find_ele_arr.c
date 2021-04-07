#include<stdio.h>
#define len 5
void main()
{
	int arr[len]={1,2,3,4,5},i,data,*ptr=arr;
	printf("array elements:");
	for(i=0;i<len;i++)
	{
		printf("%d",*(ptr+i));
	}
	printf("\n");
	printf("enter the element to find in an array:");
	scanf("%d",&data);
	for(i=0;i<len;i++)
	{
		if(data==*(ptr+i))
			break;
	}
	printf("the data:%d is found at pos:%d\n",data,i);
}
