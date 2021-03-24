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
	int data;
	printf("Enter the data:");
	scanf("%d",&data);
	if(!(data&(data-1)))
	{
		printf("data is even, data=%d\n",data);
		print_bin(data);
	}
	else
	{
		printf("data is odd, data=%d\n",data);
		print_bin(data);
	}
}
