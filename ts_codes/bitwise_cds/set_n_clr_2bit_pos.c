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

void set_2bit(int data,int bit_pos1,int bit_pos2)
{
	data=(data|1<<bit_pos1-1)|(data|1<<bit_pos2-1);
	printf("data after 2bit set=%d\n",data);
	print_bin(data);
}

void clr_2bit(int data,int bit_pos1,int bit_pos2)
{
	data=(data&~(1<<bit_pos1-1))&(data&~(1<<bit_pos2-1));
	//int temp1,temp2;
	//data=(data&~(1<<bit_pos1-1));
	//temp2=(data&~(1<<bit_pos2));
	//data=temp1|temp2;
	printf("data after 2 bit clear=%d\n",data);
	print_bin(data);
}	

void main()
{
	int data,bit_pos1,bit_pos2,choice;
	printf("enter the data:\n");
	scanf("%d",&data);
	printf("enter the 1st bit pos:\n");
	scanf("%d",&bit_pos1);
	printf("enter the 2nd bit pos:\n");
	scanf("%d",&bit_pos2);
	printf("1.set_bit 2.clear bit\n");
	printf("enter the choice\n");
	scanf("%d",&choice);
	print_bin(data);
	switch(choice)
	{
		case 1:set_2bit(data,bit_pos1,bit_pos2);
		       break;
		case 2:clr_2bit(data,bit_pos1,bit_pos2);
		      	break;
		default: printf("please enter valid choice\n");
	}
}
