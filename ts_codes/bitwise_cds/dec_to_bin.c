#include<stdio.h>
void dec_to_bin(int data)
{
	int i;
	for(i=0;i<32;i++)
	{
		printf("%d",(data<<i&1<<31)?1:0);
	}
}

void main()
{
	int data;
	printf("please enter the data:");
	scanf("%d",&data);
	dec_to_bin(data);
}

