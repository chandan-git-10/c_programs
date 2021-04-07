#include<stdio.h>
#define len 100
void main()
{
	char str1[len],str2[len]="kivade",i,j,l;
	char *ptr1=str1,*ptr2=str2;
	printf("enter str1:");
	scanf("%s",ptr1);
	printf("strs before concatinate:\n");
	printf("str1=%s and str2=%s\n",ptr1,ptr2);
	for(i=0;ptr1[i];i++)
	{
		l++;
	}
	for(i=0,j=l;ptr2[i];i++,j++)
	{
		ptr1[j]=ptr2[i];
	}
	printf("strs after concatinate:\n");
        printf("str1=%s and str2=%s\n",ptr1,ptr2);
}
