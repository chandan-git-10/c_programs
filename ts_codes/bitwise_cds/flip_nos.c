#include<stdio.h>
void print_bin(int data)
{
int i;
  for(i=31;i>=0;i--)
        {
                printf("%d",(data>>i)&1);
        }
         printf("\n");
}

void main()
{
	int data,i,j;
	printf("enter the data:\n");
	scanf("%d",&data);
	printf("data before flip:\t");
	print_bin(data);
	for(i=0;i<=31;i++)
	{
		data=data^1<<i;
				
	}
	printf("data after flip:\t");
	print_bin(data);
}
