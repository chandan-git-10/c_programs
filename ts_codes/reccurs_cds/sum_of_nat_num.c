#include<stdio.h>
int sum=0;
int sum_of_nums(int,int);
void main()
{
	int data=0,range,res=0;
	printf("enter the range:");
	scanf("%d",&range);
	res=sum_of_nums(data,range);
	printf("sum is %d\n",res);
}

int sum_of_nums(int data,int range)
{
	if(range)
	{
		data++;	
		sum+=data;
		range--;
		sum_of_nums(data,range);
	}
	return sum;
}
	
		
