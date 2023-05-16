/*
Pattern:
1
10
101
1010
10101
*/

#include<stdio.h>
main()
{
	int n, i, j;
	
	printf("Enter Number:");
	scanf("%d", &n);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",j%2);
		}
		printf("\n");
	}
}
