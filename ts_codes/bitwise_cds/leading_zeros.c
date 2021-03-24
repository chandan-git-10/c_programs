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
	int data,count=0,i;
	printf("Enter the data:");
	scanf("%d",&data);
	for(i=31;i>=0;i--)
	{
		if((data>>i)&1==1)
			{
				break;
			}
		count++;
	}
	printf("num of leading zeros:%d\n",count);
	printf("data in bin\t");
	print_bin(data);
}
