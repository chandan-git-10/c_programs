#include<stdio.h>
void print_nat(int,int);
void main()
{
	int data=0,range;
	printf("enter the range:");
	scanf("%d",&range);
	print_nat(data,range);
}

void print_nat(int data,int range)
{
	if(range)
	{
		data++;	
		printf("%d ",data);
		range--;
		print_nat(data,range);
	}
}
	
		
