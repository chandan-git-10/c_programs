#include<stdio.h>
void print_even(int,int);
void print_odd(int,int);
void main()
{
	int data=0,range;
	printf("enter the range:");
	scanf("%d",&range);
	printf("printing even nums:");
	print_even(data,range);
	printf("\nprinting odd nums:");
	print_odd(data,range);
	printf("\n");
}

void print_even(int data,int range)
{
	if(range)
	{
		data+=2;
		printf("%d ",data);
		range--;
		print_even(data,range);
	}
}


void print_odd(int data,int range)
{
        if(range)
        {	
		if(data%2==0)
		{
                data+=1;
		}
		else data+=2;
                printf("%d ",data);
                range--;
                print_odd(data,range);
        }
}

		
