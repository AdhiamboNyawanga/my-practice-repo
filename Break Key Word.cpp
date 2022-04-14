// Break Key word. to get out of loops
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int main()
{
	int i;
	for (int i=0; i<60; i++)
	{
		printf("Hello world!\n");
		
		if(i ==5)
		{
			printf("\nYey!\n");
			break;
		}
	}
return 0;	
}