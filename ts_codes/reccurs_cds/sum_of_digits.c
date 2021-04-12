#include<stdio.h>
int sum=0;
int sum_of_digits(int);
void main()
{
	int data,res;
	printf("Enter the data:");
	scanf("%d",&data);
	res=sum_of_digits(data);
	printf("sum of %d is %d\n",data,res);
}

int sum_of_digits(int data)
{
	if(data>=1)
	{
		sum+=data%10;
		data/=10;	
		sum_of_digits(data%10);
	
	}
	return sum;
}
		
