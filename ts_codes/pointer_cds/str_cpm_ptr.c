#include<stdio.h>
#define len 100
void main()
{
	char str1[len],str2[len],i,res=0;
	char *ptr1=str1,*ptr2=str2;
	printf("enter the str1:");
	scanf("%s",ptr1);
	printf("Enter the str2:");
	scanf("%s",ptr2);
	for(i=0;ptr1[i] && ptr2[i];i++)
	{
		
		if(*(ptr1+i)!=*(ptr2+i))
		{
			res=1;
			break;
		}
	}

	if(res==1)
	printf("strings are not same\n");
	else 
	printf(" strings are same\n");
}	
