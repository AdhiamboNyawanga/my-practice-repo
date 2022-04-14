// Be carefull with edge cases. 

#include <stdio.h>
#include<stdlib.h>
#include <stdbool.h>
#include <math.h>

int main ()
{
//prime numbers and algorithms
// finding out if a particular number is prime. In this case, the input.
int numPrime = 0;
	 int input = 253;
	 
	 int isPrime =true;     
	 	 
	for  (int i =sqrt(input); i > 1; i--)
	 {
	 	
	 	printf("%d\n",i);
	 	
	 	if (input % i == 0)
	 	
	 	{
	 		isPrime = false;
		 }
	 }
	 
	 if (isPrime)
	 {
	 	printf("Is Prime\n");
	 }
	 else {
	 	printf("\nNot prime\n");
	 }
	 
	 
	 
	 
	 //to take input from user, and print all primes from that number down to zero.
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	return 0;
}