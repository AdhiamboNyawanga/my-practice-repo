//structs

#include <stdio.h>

typedef struct
{
	int length;
	int width;
	int height;
} size;

typedef struct 
{
	int x;
	int y;
	int z;
} position;

typedef struct 
{
	size size;
	position position;
	char owner [30];
	
} structure;

int main()
{
	
	structure myHouse { {15, 14, 3}, { 2, 6,  7}, "Syprose Nyawanga"};
	
printf("The house at %d %d %d of size %d %d %d belongs to %s\n", 
myHouse.position.x,
myHouse.position.y,
myHouse.position.z,
myHouse.size.length,
myHouse.size.width,
myHouse.size.height,
myHouse.owner
);
	
// howw to put a struct in a pointer

structure *structPointer = &myHouse;
printf("position x : %d\n", structPointer->position.x);
	
	return 0;

	
}