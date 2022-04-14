# include <stdio.h>
# include <stdlib.h>

main (){
	
	int eggs;
	 printf("please put in the number of eggs : ");
	 scanf ("%d", &eggs);
	
	double crates= (double)eggs/12;
    
	printf("the number of crates layed is: %f", crates);
	
	return 0;
	//this is a single comment. it doesn't get compiled
	/* this is a multiple line comment. 
	also it isn't compiled.
	don't put a lot of comments.
	comments should be used to explain your codes.
	okey i am going to close it now*/
		
}
