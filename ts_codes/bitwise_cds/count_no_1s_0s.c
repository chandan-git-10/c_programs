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
	int data,count_0s=0,count_1s=0,i;
	printf("Enter the data:");
	scanf("%d",&data);
	for(i=0;i<=31;i++)
	{
	if((data>>i)&1==1)
		{
			count_1s++;
		}	
	else 
	{	
		count_0s++;
	}
	}
	printf("num of ones=%d and zeros=%d\n",count_1s,count_0s);
	printf("data in bin\t");
	print_bin(data);
}
