#include<stdio.h>
int var_even_sum=0;
int var_odd_sum=0;
int even_sum(int,int);
int odd_sum(int,int);
void main()
{
	int data=0,range,even_res=0,odd_res=0;
	printf("enter the range:");
	scanf("%d",&range);
	even_res=even_sum(data,range);
	odd_res=odd_sum(data,range);
	printf("even no's sum %d\n",even_res);
	printf("odd no's sum %d\n",odd_res);
}

int even_sum(int data,int range)
{
	if(range)
	{
		data+=2;
		var_even_sum+=data;
		range--;
		even_sum(data,range);
	}
	return var_even_sum;
}


int odd_sum(int data,int range)
{
        if(range)
        {	
		if(data%2==0)
		{
                data+=1;
		}
		else data+=2;
		var_odd_sum+=data;
		range--;
                odd_sum(data,range);
        }
	return var_odd_sum;
}

		
