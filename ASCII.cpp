#include <stdio.h>
#include<stdlib.h>

int main()
{
	//lookfor ASCII table
	//converting character value to integer value
	char ASCII;
	printf("Please put in a character: ");
	scanf("%c", &ASCII);
	
	printf("%d\n", ASCII);
	
	//converting integer value to character value
	int syp;
	printf("Please put in an integer between 0 - 127: ");
	scanf("%i", &syp);
	printf("%c\n", syp);
	
	/*because every character has an integer value behind it, we can use them to do maths.*/
	char maths = 'A' + '\t';
	printf("A(65) + \\t(11) =%c(%d)\n", maths, maths);
	// first backslash in //t is for introducing the second backslash.
	
	return 0;
}