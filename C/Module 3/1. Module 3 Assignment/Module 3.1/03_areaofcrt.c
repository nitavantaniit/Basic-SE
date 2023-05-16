/*
WAP to find area of circle, rectangle and triangle
*/

#include<stdio.h>
main()
{
	float radius, cirarea; 
	int length, breadth, rectarea, base, height, triarea;
	
	printf("Enter Radius of Circle:");
	scanf("%f", &radius);
	
	cirarea = 3.14 * radius * radius;
	
	printf("\nArea of Circle is: %f", cirarea);
	
	printf("\n\nEnter Length of Rectangle:");
	scanf("%d", &length);
	printf("\n\nEnter Breadth of Rectangle:");
	scanf("%d", &breadth);
	
	rectarea = length * breadth;
	
	printf("\n\nArea of Rectangle is: %d", rectarea);
	
	printf("\n\n\nEnter Base of Triangle:");
	scanf("%d", &base);
	printf("\n\n\nEnter Height of Triangle:");
	scanf("%d", &height);
	
	triarea = (base * height)/2;
	
	printf("\n\n\nArea of Triangle is: %d", triarea);
		
}
