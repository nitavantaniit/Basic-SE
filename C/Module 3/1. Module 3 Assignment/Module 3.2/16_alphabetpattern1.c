/*
Pattern:
A
BC
DEF
GHIJ
KLMNO
*/

#include<stdio.h>
main()
{
	int i, j, k, n;
	char ch='A';
	printf("Enter Number:");
	scanf("%d", &n);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%c",ch);
			ch++;
		}
		printf("\n");
	}
}
