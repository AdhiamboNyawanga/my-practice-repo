// Do While loop will still have initialization, comparison and update.
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>


int main ()
{
int input;
	
do {
	printf("Please enter anumber between 0-9: ");
	
	scanf("%d", &input);
	
}
while (input <0 || input >9);
	
	return 0;
}