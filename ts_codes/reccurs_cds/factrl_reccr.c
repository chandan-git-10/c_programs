#include<stdio.h>
int fact=1;
int factorial(int);
void main()
{
	int data,res;
	printf("Enter the data:");
	scanf("%d",&data);
	res=factorial(data);
	printf("foctoral of %d is %d\n",data,res);
}

int factorial(int data)
{
	if(data>=1)
	{
		return data*factorial(data-1);
	
	}
	return 1;
}
		
