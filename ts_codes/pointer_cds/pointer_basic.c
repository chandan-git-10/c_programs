#include<stdio.h>
void main()
{
	int data=5,*ptr; //initializing ptr pointer
	ptr=&data; //assigning poiter to point data var
	printf("initial data value data=%d\n",data);
	printf("enter the data\n");
	scanf("%d",ptr); //inputing the data varibale using pointer
	printf("data value after scanf data=%d\n",data);
	++*ptr;// pointer increment
	printf("data value after inc data=%d\n",*ptr); //output printing using ptr
	printf("data value after inc data=%d\n",data);
}
