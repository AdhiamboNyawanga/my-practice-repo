// Void function
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

{
	int factorial(int num);
	
	int i;
	
	{
    	for(int i = num; i > 1; i--)
	{
		factorial *= 1;
	}
 
	}
   return factorial;
   }


void outputFactorial(int input)
{
	printf("The factorial of %d is %d.\n", input, factorial(input));
}

int main()
{
	for(int i = o; i < 10; i++)
	{
	outputFactorial(i);
	}
	return 0;
}
