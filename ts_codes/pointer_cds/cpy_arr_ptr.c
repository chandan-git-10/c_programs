#include<stdio.h>
#define LEN 5
void main()
{
	int arr1[LEN],arr2[LEN];
	int *ptr1=arr1,*ptr2=arr2,i;
	printf("enter the elements of arr\n");
	for(i=0;i<LEN;i++)
	{
		scanf("%d",ptr1+i);
	}
	
	for(i=0;i<LEN;i++)
	{
	
		*(ptr2+i)=*(ptr1+i);
	}

	printf("elements of array1\n");
        for(i=0;i<LEN;i++)
        {
                printf("%d",*(ptr1+i));

        }
	printf("\n");
	printf("elements of array2\n");
        for(i=0;i<LEN;i++)
        {
                printf("%d",*(ptr2+i));

        }
	printf("\n");
}
