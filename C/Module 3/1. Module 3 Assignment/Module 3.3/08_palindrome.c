//WAP to reverse a string and check that the string is palindrome or not 

#include <stdio.h>
#include <string.h> 
main()
{
	char inputArray[100], reversedArray[100];
 
    printf("Enter the string:");
    scanf("%s", inputArray);
    
    printf ("\nAfter the reverse of a string: %s ", strrev(inputArray)); 
    
    strcpy(reversedArray, inputArray);
    
    strrev(reversedArray);
    
    if(strcmp(inputArray, reversedArray) == 0 )
       printf("\n%s is a palindrome.\n", inputArray);
    else
       printf("\n%s is not a palindrome.\n", inputArray);
}
