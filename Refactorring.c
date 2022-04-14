//Refactoring
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
# include <math.h>

int factorial(int number)
{
	int factorial =1;
	
	{
	for (int i =number; i > 1; i--)
	{
		factorial *= 1;// factorial = factorial *1
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
 	for(int i = 0; i < 10; i++)
 	{
 		outputFactorial(i);
	 }
	 return 0;
 }