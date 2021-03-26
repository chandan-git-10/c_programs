#include<stdio.h>
#define len 10
void main()
{
	char src_arr[len],dst_arr[len]="chandan",i;
	printf("enter the src string:");
	scanf("%s",src_arr);
	printf("strings before copy\n");
	printf("src str=%s and dst str=%s\n",src_arr,dst_arr);
	for(i=0;src_arr[i]&&len;i++)
	{
		dst_arr[i]=src_arr[i];
	}
	printf("strings after copy\n");
	printf("src str=%s and dst str=%s\n",src_arr,dst_arr);
}
