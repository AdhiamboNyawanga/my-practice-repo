#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	// using 2 doubles to calculate the lengthof the hypoteneous. use sqrt
	
	double a;
    double b;
    
    printf("This app calculates the hypotenues of a right triangle.\n");
     
     printf("Please enter the first value: ");
	 scanf("%lf", &a);

printf("Please enter the second value: ");
	 scanf("%lf", &b);

double c = sqrt((a*a) +(b*b));

printf("The hypoteneuse is %lf\n", c);





return 0;
}
