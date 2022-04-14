#include <stdio.h>
#include <stdlib.h>

int main()

{
 // binary arithmetic	
	int x =2 + 3 * 4 / 3 -2;
	 int y = 5 % 2;

	printf("%d\n",x);
	printf("%d\n",y);
	
	//unary arithmetic
	
	int money =25;
	int bill =15;
	
	int total= money - -bill;
	
	printf("%d\n", total);
	
	//increament and decreament operators
	// ++ isthesame as +1
	int eggs =123;

	int eggsToEat = eggs++;
	
	int eggsCrates = ++eggs;
	
	printf("%i\n", eggsToEat); // answer = 123
	
		printf("%i\n", eggsCrates); // answer = 125
		
		// we are taking eggs, adding 1 to it,the assigning it back. Second instance, we're taking 124 eggs from previous operation adding 1 thus 125
	
	
	//decreament operator
	
		int apples =123;

	int applesToEat = eggs--;
	
	int applesCrates = --eggs;

	

	
	printf("%i\n", applesToEat); // answer = 125
	
	printf("%i\n", applesCrates); // answer = 123
	
		applesCrates -=100;
	    printf("%i\n", applesCrates);
	   
		applesCrates +=100;
		printf("%i\n", applesCrates);	
		applesCrates *=100;
		printf("%i\n", applesCrates);
		
		 applesCrates /=100;
		 printf("%i\n", applesCrates);
		 
		 
		 
		 
		 
		 
		 
		 
		 
		 
	return 0;
}
 // % (modulus operator) gives a remainder after 5 is divided by 2 when we do calculations with integers.