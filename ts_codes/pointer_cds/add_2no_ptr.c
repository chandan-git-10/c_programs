#include<stdio.h>
void main()
{
	int data1,data2,*ptr1,*ptr2,sum;
	ptr1=&data1;
	ptr2=&data2;
	printf("Please enter the data1 and dat2:\n");
	scanf("%d %d",ptr1,ptr2);
	sum=*ptr1+*ptr2;
	printf("sum of 2 no's sum=%d\n",sum);
}
