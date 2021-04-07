#include<stdio.h>
#define LEN 100
void main()
{
	char arr1[LEN],arr2[LEN];
	char *ptr1=arr1,*ptr2=arr2,i;
	printf("enter the elements of str1\n");
	scanf("%s",ptr1);
	printf("enter the elements of str2\n");
	scanf("%s",ptr2);
	for(i=0;ptr1[i]||ptr2[i];i++)
	{
	
		*(ptr2+i)=*(ptr1+i);
	}

	printf("elements of str1:%s\n",ptr1);
       	printf("elements of str2:%s\n",ptr2);
        
}
