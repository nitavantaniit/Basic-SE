/* 
WAP to take two Array input from user and sort them in ascending or descending order as per 
user’s choice
*/

#include<stdio.h>
main()
{
	int a[5], i, j, temp;
	
	printf("Enter five numbers:");
	
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	
	printf("Ascending order are:");
	for(i=0;i<5;i++)
	{
		printf(" %d ",a[i]);
	}
	
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	
	printf("\nDescending order are:");
	for(i=0;i<5;i++)
	{
		printf(" %d ",a[i]);
	}
}


