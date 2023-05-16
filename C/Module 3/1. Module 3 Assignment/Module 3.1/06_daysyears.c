/* 
WAP to convert years into days and days into years
*/

#include<stdio.h>
main()
{
	int days, years;
	
	printf("Enter days:");
	scanf("%d", &days);
	
	years = days/365;
	
	printf("\nNumber of years is: %d", years);
	
	printf("\n\nEnter years:");
	scanf("%d", &years);
	
	days = years * 365;
	
	printf("\n\nNumber of days is: %d", days);
}
