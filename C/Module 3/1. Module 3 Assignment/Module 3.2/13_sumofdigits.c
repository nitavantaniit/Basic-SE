//Write a program make a summation of given number (E.g., 1523 Ans: -11) 

#include<stdio.h>
main()
{
	int n, r, sum=0;
	
	printf("Enter any number:");
	scanf("%d", &n);
	
	while(n>0)
	{
		r=n%10;
		sum=sum+r;
		n=n/10;
	}
	printf("Sum of digit: %d", sum);
}
