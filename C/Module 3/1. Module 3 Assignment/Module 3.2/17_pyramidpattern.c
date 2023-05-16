/*

Pattern:

    *
   ***
  *****
 *******
*********
 
*/

#include<stdio.h>
main()
{
	int n, i, j, k;
	
	printf("Enter number: ");
	scanf("%d",&n);
	
	for(i= 1; i <= n; i++)
	{
		for(k=i;k<=n;k++)
		{
			printf(" ");
		}
		for(j=1;j<=(2*i-1);j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
