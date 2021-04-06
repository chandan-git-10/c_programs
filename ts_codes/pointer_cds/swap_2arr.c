#include<stdio.h>
#define len 3
void main()
{
	int i,arr1[]={1,2,3},temp[len];
	int arr2[len],*ptr1=arr1,*ptr2=arr2;
	printf("enter the elements for arr2:");
	for(i=0;i<len;i++)
	{
	scanf("%d",ptr2+i);
	}
	printf("array1 elements:");
	for(i=0;i<len;i++)
	{
	printf("%d ",*(ptr1+i));
	}
	printf("\n");
	printf("array2 elements:");
	for(i=0;i<len;i++)
        {
        printf("%d ",*(ptr2+i));
        }
	printf("\n");
	//swapping arrays
	for(i=0;i<len;i++)
	{
		temp[i]=arr1[i];
		arr1[i]=arr2[i];
		arr2[i]=temp[i];
	}
	 printf("array1 elements:");
        for(i=0;i<len;i++)
        {
        printf("%d ",*(ptr1+i));
        }
	printf("\n");
        printf("array2 elements:");
        for(i=0;i<len;i++)
        {
        printf("%d ",*(ptr2+i));
        }
	printf("\n");

}
