/*
 WAP to find simple interest 
*/

#include<stdio.h>
main()
{
	float p, r, t, SI;
	
	printf("Enter Principle Amount:");
	scanf("%f", &p);
	printf("\nEnter Rate:");
	scanf("%f", &r);
	printf("\nEnter Time:");
	scanf("%f", &t);
	
	SI = (p * r * t)/100;
	
	printf("Simple Interest = %f", SI);
}
