// Nested if

//we'll use else if statement.
#include <stdio.h>
#include<stdlib.h>
#include <stdbool.h>
#include<math.h>

int main ()
{
	printf("Choose a menu option 1-4\n");
	printf("1.Add apatient\n");
	printf("2.View a patient\n");
	printf("3.Search patients\n");
	printf("4.exit\n");
	
	int input;
	scanf("%d", &input);
	
	if(input ==1) 
	{
	printf("Adding apatient\n");	
	}
	
	else if (input ==2)
	{
	printf(" Viewing a patient\n");	
	
	
	}
	
	else if (input ==3)
	{
		printf("Searching for a patient\n");
			
	}
	
	else if (input==4)
	{
		printf("Exiting\n");
		
		printf("Do you want to save? y/n : ");
		
		char q;
		
		getchar();
		scanf("%c", &q);
		
		
		if (q == 'Y' || q == 'y')
{
	printf("fine\n");
		
		}
		
	else if (q == 'N' || q == 'n')
{
	printf("okey\n");
		
		}	
		
	else
	{
		printf("now i dont know!");
		}	
		
		
				
		}	
	
	
	else
	{
		printf("Incorrect input\n");
		}	
	
	
	
	//single line if statements
	
	
	
		
	return 0;
}