// Multi dimensional Arrays
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int main()
{
	int const column = 4;
	int const row = 3;
	
	
	int studentsGrades [3][4] =
{	{12, 34, 43, 50},
	{22, 37, 45, 5},
	{25, 37, 15, 70} };
	
	printf("%d\n\n", studentsGrades[0][3]); //displaying one element of the array
	
	for(int i =0; i < 3; i++) // dispalying all the elements of the array
	{
		for (int x =0; x < 4; x++)
		{
			printf("%d", studentsGrades [i][x]);
		}
		printf("\n");
	}
	
	
	return 0;
}