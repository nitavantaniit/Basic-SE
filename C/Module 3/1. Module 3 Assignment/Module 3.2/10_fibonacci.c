//WAP to print Fibonacci series up to given numbers 

#include<stdio.h>
main()
{
	int i, n, t1=0, t2=1, t3;
	
	t3=t1+t2;
	
	printf("Enter Number:");
	scanf("%d", &n);
	
	printf("Fibonacci Series:  %d  %d ", t1, t2);
	
	for(i=0;i<=n;i++)
	{
		printf(" %d ", t3);
		t1=t2;
		t2=t3;
		t3=t1+t2;
		
	}
}
