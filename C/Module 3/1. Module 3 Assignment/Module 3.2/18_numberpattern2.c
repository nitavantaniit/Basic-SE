/*
Pattern:
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
*/

#include<stdio.h>
main()
{
	int n, i, j, c = 1;
	
	printf("Enter number: ");
	scanf("%d",&n);
			
	for(i = 1; i <= n; i++)
	{
		for(j = 1; j <= i; ++j)
		{
			printf("%d ", c);
			++c;
		}
		printf("\n");
	}
}
