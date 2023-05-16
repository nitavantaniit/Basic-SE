/* 
Write a program to make Simple Calculator (to make addition, subtraction, multiplication, division 
and modulo)
*/

#include <stdio.h>
main()
{	
	int a, b, add, subtract, mul, div; 
	float mod;	
	
	printf("\n Enter First Number :");   	
	scanf("%d",&a);	
	printf("\n Enter Second Number :");   	
	scanf("%d",&b);	
	
	add = a + b;	
	printf("\n\n Addition is : %d", add);   
		
	subtract = a - b;	
	printf("\n\n Subtraction is : %d", subtract);  
		
	mul = a * b;	
	printf("\n\n Multiplication is : %d", mul);  
		
	div = a / b;	
	printf("\n\n Division is : %d", div); 
		
	mod = a % b;	
	printf("\n\n Modulus is : %f", mod);
}
