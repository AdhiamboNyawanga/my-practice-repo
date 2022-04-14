#include <stdio.h>
#include <stdlib.h>

main (){
	char name [20];
	int age;
	
	 printf("please put your name: ");
	 
	 scanf ("%s", &name);
	 printf("please put your age : ");
	 scanf ("%d", &age);
	 printf ("my name is %s\nI am %d", name, age);
	 
	 return 0;
	 
}

