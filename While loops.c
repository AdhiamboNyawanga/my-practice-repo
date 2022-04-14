// While loop
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>


int main ()
{
	
	//
	int x =0, k;
	while (x < 11)
	
	
	{
		k = x- 1;
			
		printf("%d", x);
		x++;
		
				
		while (k >= 0)
		{
		printf("%d",k);
		k--;	
		}
		
		printf("\n");
	}
	
	
	
	return 0;
}