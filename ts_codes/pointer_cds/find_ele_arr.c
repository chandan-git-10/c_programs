#include<stdio.h>
#define len 5
void main()
{
	int arr[len]={10,2,35,48,5},i,data,*ptr=arr;
	printf("array elements:");
	for(i=0;i<len;i++)
	{
		printf("%d ",*(ptr+i));
	}
	printf("\n");
	printf("enter the element to find in an array:");
	scanf("%d",&data);
	for(i=0;i<len;i++)
	{
		if(data==*(ptr+i))
			break;
	}
	if(i<len)
	printf("the data:%d is found at pos:%d\n",data,i);
	else
	printf("data not found\n");
}
