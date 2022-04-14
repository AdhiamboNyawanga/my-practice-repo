#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
	 //to take input from user, and print all primes from that number down to zero.
	 
	 bool isPrime(int input)
	 	 	  
	 {	 
	 
	for(int i = sqrt(input); i > 1; i--)
	 {
	 	
	 	printf("%d\n",i);
	 	
	 	if (input % i == 0)
	 	
	 	{
	 		return false;
		 }
	 else {
	 		 
	 return true;
}
		 	
	 	 
	 
	 

	 
int main()
 {
int input;
scanf("%d", &input);

for(int i = input; i > 1; i--)
  {
	
		bool prime = isPrime(i); 
	
	 if(prime)
	 {
	 	printf("%d Is Prime\n", i);
	 }
	 
	 else
	  {
	 	printf("\n%d Is not prime\n", i);
	  }

  }

  
return 0;
	 
 }