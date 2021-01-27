#include<stdio.h>
int main()
{
	int i=0,j=0,num=0,sum=0;
	printf("Enter the num:\n");
	scanf("%d",&num);
	for(i=0;i<=num;i++,printf("\n"))
	{
		for(j=0;j<=num;j++)
		{
			sum=i+j;
			if (i==j)
				printf( " | " );
			else if (sum==num)
				printf(" / ");
			else printf(" * ");
		}
	}
	return 0;
}
