// C program to demonstrate isdigit()
#include <ctype.h>
#include <stdio.h>

// Driver Code
int main()
{
	// Taking input
	char ch;
    printf("enter the number:");
    scanf("%d", &ch);

	// Check if the given input
	// is numeric or not
	if (isdigit(ch))
		printf("\nEntered character is"
			" numeric character");
	else
		printf("\nEntered character is not"
			" a numeric character");
	return 0;
}
