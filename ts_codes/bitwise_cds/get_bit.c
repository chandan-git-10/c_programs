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
	int data,bit_pos,res=0;
	printf("enter the data and bit pos");
	scanf("%d %d",&data,&bit_pos);
	res=(data>>bit_pos-1)&1;
	printf("nth bit postion data=%d\n",res);
	printf("input data");
	print_bin(data);
	printf("output data");	
	print_bin(res);
}

