//WAP Find out length of string without using inbuilt function

#include<stdio.h>
#include<string.h>
main()
{
	char name[20];
	int length;
	
	printf("Enter String : ");
	gets(name);
	
	length=strlen(name);
	printf("Length of given string : %d",length);
}
