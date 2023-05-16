/*
WAP to take 10 no. Input from user and find out …
1. How many Even numbers are there
2. How many odd numbers are there
3. Sum of even numbers
4. Sum of odd numbers 
*/

#include<stdio.h>
main()
{
	int a[10],i,evensum=0,oddsum=0;
	
	printf("Enter 10 Numbers:");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("\nEven Numbers are:");
	for(i=0;i<10;i++)
	{
		if(a[i]%2==0)
			printf("%d,",a[i]);
		
	}
	
	for(i=0;i<10;i++)
	{
		if(a[i]%2==0)
			evensum+=a[i];
	}
	printf("\nSum of Even Numbers are: %d", evensum);
	
	printf("\n\nOdd Numbers are:");
	for(i=0;i<10;i++)
	{
		if(a[i]%2==1)
			printf("%d,",a[i]);
		
	}
	
	for(i=0;i<10;i++)
	{
		if(a[i]%2==1)
			oddsum+=a[i];
	}
	printf("\nSum of Odd Numbers are: %d", oddsum);
}
