//WAP to print table up to given numbers

#include<stdio.h>
main()
{
	int num, i;
	printf("\nEnter the number you want multiplication table of:");
	scanf("%d", &num);
	
	printf("\nMultiplication table of %d is as follows:", num);
	
	for(i=1;i<=10;i++)
	{
		printf("\n%d x %d = %d", num, i, num*i);
	}
}
