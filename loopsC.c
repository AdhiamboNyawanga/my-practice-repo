
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <time.h>
int main()
{
    // if statement
    bool pizzaIsHealthy;
    int temp;

    printf("Do you believe that pizza is healthy? Type 1 for true and 0 for false : ");
    scanf("%d", &temp);

    pizzaIsHealthy = temp;

    if (pizzaIsHealthy == 1);
    {
        printf("Welcome to my pizza App\n");
        
            }
    
    //Relational operators.
    //guessing game. the user has to guess a numberfrom 0-5. Then we output whether or not the person is correct
    // if else
    int maxValue =5;
    srand (time(NULL));
    int randomNumber =rand() % maxValue +1;
    
    printf("%d\n",randomNumber);
    printf("Guess a number 0 -%d: ", maxValue);
    
    int input;
    scanf ("%d", &input);
    
    if(input == randomNumber)
    {
    	printf("You win!\n");
    	
    	} else
    	{
    		printf("You loose!\n");
		}
	printf ("Thank you for playing!\n");
	
	// logical operators .
	//they are used to build complex conditionals.
	
	
	
	
	
	
    
    
    return 0;
}
