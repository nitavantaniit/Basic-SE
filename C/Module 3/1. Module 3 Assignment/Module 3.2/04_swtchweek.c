//WAP to show Monday to Sunday using Switch Case

#include<stdio.h>
main()
{
	int days;
	
	printf("Enter Days of the week: ");
	scanf("%d", &days);
	
	switch(days)
	{
		case 1:
			printf("Monday");
			break;
			
		case 2:
			printf("Tuesday");
			break;
		
		case 3:
			printf("Wednesday");
			break;
			
		case 4:
			printf("Thursday");
			break;
			
		case 5:
			printf("Friday");
			break;
			
		case 6:
			printf("Saturday");
			break;
			
		case 7:
			printf("Sunday");
			break;
			
		default:
			printf("Enter valid days of the week!");
	}
}
