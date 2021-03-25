#include<stdio.h>
#define LENGHT 10
void main()
{
	int arr[LENGHT];
	int *ptr=arr,i;
	printf("enter the elements\n");
	for(i=0;i<LENGHT;i++)
	{
		scanf("%d",ptr+i);
	}	
	printf("array elements\t");
	for(i=0;i<LENGHT;i++)
	{
	printf("%d,",*(ptr+i));
	}
	printf("\n");
}
