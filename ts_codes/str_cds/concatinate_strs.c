#include<stdio.h>
#define len 100
void main()
{
	char str1[len],str2[len]="kivade",i,j,l;
	printf("enter str1:");
	scanf("%s",str1);
	printf("strs before concatinate:\n");
	printf("str1=%s and str2=%s\n",str1,str2);
	for(i=0;str1[i];i++)
	{
		l++;
	}
	for(i=0,j=l;str2[i];i++,j++)
	{
		str1[j]=str2[i];
	}
	printf("strs after concatinate:\n");
        printf("str1=%s and str2=%s\n",str1,str2);
}
