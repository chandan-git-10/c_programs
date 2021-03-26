#include<stdio.h>
#define len 32

void print_bin(int data)
{
	int i;
  	for(i=31;i>=0;i--)
        {
                printf("%d",(data>>i)&1);
        }
        printf("\n");
}
int left_rotate(int data,int rotate)
{
	int res;
	res=(data<<rotate)|(data>>(len-rotate));
	return res;
}
int right_rotate(int data,int rotate)
{
	int res;
        res=(data>>rotate)|(data<<(len-rotate));
        return res;
}

void main()
{
	int data,rotate,choice,res;
	printf("Enter the data and rotate:");
	scanf("%d %d",&data,&rotate);
	printf("Enter the choice");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:res=left_rotate(data,rotate);
		       printf("Data after left rotate: %d\n",res);
		       printf("binary value\t");
		       print_bin(res);
			break;
		case 2:res=right_rotate(data,rotate);
                       printf("Data after right rotate: %d\n",res);
                       printf("binary value\t");
                       print_bin(res);
                        break;
		default: printf("please enter valid choice");
	}
}


