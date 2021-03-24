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
	int data,i,res;
	printf("Enter the data:");
	scanf("%d",&data);
	for(i=31;i>=0;i--)
	{
		res=(data>>i)&1;
		if(res==1)
			break;
	}
	printf("data at highest pos:%d\n",res);
	printf("input data\t");
	print_bin(data);
	printf("output data\t");	
	print_bin(res);
}
