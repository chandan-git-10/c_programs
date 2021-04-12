#include<stdio.h>
int rev=0;
int rev_of_digits(int);
void main()
{
	int data,res;
	printf("Enter the data:");
	scanf("%d",&data);
	res=rev_of_digits(data);
	printf("rev of %d is %d\n",data,res);
}

int rev_of_digits(int data)
{
	if(data>=1)
	{
		rev=rev*10+data%10;
		data/=10;	
		rev_of_digits(data);
	
	}
	return rev;
}
		
