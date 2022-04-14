// Strings
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int main()
{
	char food [20];
	
	printf("What is your favourite meal? : ");
	scanf("%s", food);
	
	printf(" Your favourite food is %s\n", food);
	
	
	int charCount = strlen(food);
	
	printf("%d\n", charCount);
	
	return 0;
}
