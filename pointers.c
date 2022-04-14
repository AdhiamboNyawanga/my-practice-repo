// Pointers
// one has to use * while declaring it ie int *p. But when declaring just use p=&x but refrence using *p.

#include <stdio.h>

int main()
{
	int slices = 20;
	int *p = &slices;
	
	printf("%d\n", slices);
	printf("%d\n", *p);
slices++;

(*p)++;	

printf("%d\n", slices);
	printf("%d\n", *p);
	
	*p = 25;
	
	printf("%d\n", slices);
	printf("%d\n", *p);	
	(*p)--;	
	
	
	
	
return 0;	
}