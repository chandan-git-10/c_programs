#include<stdio.h>
int main()
{
	int i=0,j=0,num=0;
	printf("Enter the num:");
	scanf("%d",&num);
	for(i=0;i<=num;i++,printf("\n"))
	{
		for(j=0;j<=num;j++)
			if(j==0 || i==j)
				printf("1");
			else if(j<i)
				printf("%d",(i-1));
			else printf(" ");

	}
	return 0;
}
