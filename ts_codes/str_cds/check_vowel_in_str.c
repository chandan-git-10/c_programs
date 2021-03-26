#include<stdio.h>
#define len 100
void main()
{
	char str[len],i,vowels,consonents;
	printf("enter the str:");
	scanf("%s",str);
	for(i=0;str[i];i++)
	{
		if(str[i]=='a' || str[i]=='e' || str[i]=='i'|| str[i]=='o' || str[i]=='u' || str[i]=='A'|| str[i]=='E' || str[i]=='I'|| str[i]=='O' || str[i]=='U')
			vowels++;
		else
		consonents++;
	}
	printf("No of vowels and consonents in string:");
	printf("vowels=%d consonets=%d\n",vowels,consonents);
}

