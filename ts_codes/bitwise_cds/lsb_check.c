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
	print_bin(data);
	if(((data>>1)&1)==1)
		printf("LSB is set\n");
	else
		printf("LSB is clear\n");

}

