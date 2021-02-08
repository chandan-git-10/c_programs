#include<stdio.h>
#include<string.h>
#define LENGHT 10
#define NOOFSTRS 4 
void main()
{
	char str[NOOFSTRS][LENGHT] =  {"union" , "struct" , "typedef" , "array"};
	char temp[LENGHT], i=0,j=0;
	for(i=0;i<NOOFSTRS;i++,printf("\n")){
	printf("str before sorting:%s",str[i]);
	}
	for(i=0;i<NOOFSTRS;i++){
	for(j=i+1;j<NOOFSTRS;j++)
	{
		if(strcmp(str[i],str[j])>0) 
		{
			strcpy(temp,str[i]);
			strcpy(str[i],str[j]);
			strcpy(str[j],temp);
		}
		
	}
	}
	for(i=0;i<NOOFSTRS;i++,printf("\n")){
	printf("Sorted string array:%s",str[i]);
	}
}
