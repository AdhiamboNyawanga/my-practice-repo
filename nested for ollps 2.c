// Loops
// loops have 3 steps, initialization, comparison and update

#include <stdio.h>
#include<stdlib.h>
#include <stdbool.h>
#include<math.h>

int main ()
{

	 
	 //nested for loop
	 /*
	 0
	 1 0
	 2 1 0
	 3 2 1 0
	 4 3 2 1 0
	 5 4 3 2 1 0
	 6 5 4 3 2 1 0
	 7 6 5 4 3 2 1 0
	 8 7 6 5 4 3 2 1 0
	 9 8 7 6 5 4 3 2 1 0
	 */
	 
	 for (int x =0; x < 11; x++)
	 {
	 	//printf("%d\n",x);
	 	
	 	for (int k = x; k >= 0; k--)
	 	{
	 		printf("%d ",k);
		 }
		 
		 printf("\n");
	 }
	  
	  printf("\n");
	  
	 for (int s = 10; s >= 0; s--)
	 {
	 	 	
	 	for (int p = s; p <= 10; p++)
	 	{
	 		printf("%d ",p);
		 }
		 
		 printf("\n");
	 }
	 
	return 0;
}