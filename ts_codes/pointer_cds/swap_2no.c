#include<stdio.h>
void main()
{
	int data1,data2,temp,*ptr1,*ptr2,*temp_ptr;
	ptr1=&data1;
	ptr2=&data2;
	temp_ptr=&temp;
	printf("Enter the data1 and data2:\n");
	scanf("%d %d",ptr1,ptr2);
	printf("data before swap data1=%d data2=%d\n",data1,data2);
	*temp_ptr=*ptr1;
	*ptr1=*ptr2;
	*ptr2=*temp_ptr;
	printf("data after swap data1=%d data2=%d\n",*ptr1,*ptr2);
}


