#include<stdio.h>
int main()
{
	char c = 4;
	short int si = 5;
	int i = 6;
	float f = 7;
	printf("addr c=%p\n addr i= %p\n addr f=%p\n",&c,&i,&f);
	return 0;
}
