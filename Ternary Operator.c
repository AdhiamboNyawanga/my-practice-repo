// Trnary operator ; another way of doing if statements.


#include <stdio.h>
#include<stdlib.h>
#include <stdbool.h>
#include<math.h>

int main ()
{
	double money =20;
	double  cost =25;
	
/*	if (money > cost)
	
	{
		printf("You can afford it!");
	}
	 else {
	 	printf("Sorry you need %lf more money\n", cost - money);
	 }*/
	 
	 
	 
	 money > cost? printf("You can afford it!") : printf("Sorry you need %lf more money\n", cost - money);
	 
		
	return 0;
}