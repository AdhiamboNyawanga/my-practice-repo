// Listing contents of an array using loops.
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int main()
{
	int size = 4;
	int myGrades[size];
	
	myGrades[0]=10;
	myGrades[1] =25;
	myGrades[2] =34;
	myGrades[3] = 42;
	
	
	int i;
	for(int i =0; i< size; i++)
	{
		printf("%d\n", myGrades[i]);
	}
	
	
	
	
	
return 0;	
}