// WAP to print number in reverse order e.g.: number = 64728 ---> reverse = 82746


#include<stdio.h>
main()
{
	int i, n, rev=0, rem=0;
	printf("Enter Numbers : ");
	scanf("%d",&n);
	
	for(i=0;n!=0;i++)
	{
		rem=n%10;
		rev=rev*10+rem;
		n/=10;
	}
	
	printf("Reverse Numbers: %d ", rev);
	
}
