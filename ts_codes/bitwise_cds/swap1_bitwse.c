#include<stdio.h>
void main()
{
	int data1,data2;
	printf("Enter the data:");
	scanf("%d %d",&data1,&data2);
	printf("data before swap data1=%d data2=%d\n",data1,data2);
	data1=data1^data2;
	data2=data1^data2;
	data1=data1^data2;
	printf("data after swap data1=%d data2=%d\n",data1,data2);
}

