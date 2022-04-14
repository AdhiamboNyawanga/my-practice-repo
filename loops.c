// Loops
// loops have 3 steps, initialization, comparison and update

#include <stdio.h>
#include<stdlib.h>
#include <stdbool.h>
#include<math.h>

int main ()
{
	//for loops
	int max;
	int i;
	
	scanf("%d", &max);
	for (int i = 0; i < max; i++)
	{
		printf("%d\n", i);
	}
	 printf("You printed %d numbers\n", max);
		
	// another example
		
	int min;
	
	scanf("%d", &min);
	for (; min <= 0; min = min -2) // we cannot allocate an odd number on this because it will get to negative and continue processing forever.
	{
		printf("%d\n", min);
	}
		 
	 
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
	 
	 for (int x =0; x < 11; i++)
	 {
	 	//printf("%d\n",x);
	 	
	 	for (int k = x; k >= 0; k--)
	 	{
	 		printf("%d ",k);
		 }
		 
		 printf("\n");
	 }
	 
	 
	 
	return 0;
}