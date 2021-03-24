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
	int data,bit_pos,res;
	printf("enter the data and bit pos");
	scanf("%d %d",&data,&bit_pos);
	res=data^(1<<bit_pos-1);
	printf("data after toggle=%d\n",res);
	printf("input data\t");
	print_bin(data);
	printf("output data\t");	
	print_bin(res);
}

