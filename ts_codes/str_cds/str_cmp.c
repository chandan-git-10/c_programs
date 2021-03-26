#include<stdio.h>
#define len 100
void main()
{
	char str1[len],str2[len],i,res;
	printf("enter the str1:");
	scanf("%s",str1);
	printf("Enter the str2:");
	scanf("%s",str2);
	for(i=0;str1[i] || str2[i];i++)
	{
		if(str1[i]==str2[i])
			res=0;

		res=(str1[i]-str2[i]);
	}
	if(res!=0)
	printf("strings are not same\n");
	else 
	printf(" strings are same\n");
}	
