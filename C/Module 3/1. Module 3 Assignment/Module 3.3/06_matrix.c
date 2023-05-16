//WAP to make addition, Subtraction and multiplication of two matrix using 2-D Array 

#include<stdio.h>
#include<conio.h>
void main()
{
	int a[3][3], b[3][3], c[3][3], i, j, k, r;
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter the value a[%d][%d]", i, j);
			scanf("%d", &a[i][j]);
		}
	}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter the value b[%d][%d]", i, j);
			scanf("%d", &b[i][j]);
		}
	}
	printf("1. Addition \n2. Subtraction \n3. Multiplication \n");
	scanf("%d", &r);
	
		switch(r)
		{
			case 1:
				for(i=0;i<3;i++)
				{
					for(j=0;j<3;j++)
					{
						c[i][j] = a[i][j] + b[i][j];
					}
				}
				for(i=0;i<3;i++)
				{
					for(j=0;j<3;j++)
					{
						printf("%4d", c[i][j]);
						if(j==2)
						{
							printf("\n");
						}
					}		
				}
			break;
			
			case 2:
				for(i=0;i<3;i++)
				{
					for(j=0;j<3;j++)
					{
						c[i][j] = a[i][j] - b[i][j];
					}
				}
				for(i=0;i<3;i++)
				{
					for(j=0;j<3;j++)
					{
						printf("%4d", c[i][j]);
						if(j==2)
						{
							printf("\n");
						}
					}		
				}
			break;
			
			case 3:
				for(i=0;i<3;i++)
				{
					for(j=0;j<3;j++)
					{
						for(k=0;k<3;k++)
						{
							c[i][j] = a[i][k] + b[k][j];
						}
					}
				}
				for(i=0;i<3;i++)
				{
					for(j=0;j<3;j++)
					{
						printf("%4d", c[i][j]);
						if(j==2)
						{
							printf("\n");
						}
					}		
				}
			break;			
		}
	
}
