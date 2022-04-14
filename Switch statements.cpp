// switch statement

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include<math.h>

int main()
{
printf("Please put the number of pizzas you've eaten: ");
int slices =3;

scanf("%d", &slices);

int caloriesPerSlice = 4;
switch(slices){
	
	
    case 1:
     	printf("You did great\n");
    	break;

    	case 2:
    	printf("You did okey\n");
    	break;
	
        case 3:
        printf("You did bad\n");
        break;
    
        case 4:
        printf("You're a dissapointment\n");
        break;
    
        default:
        printf("Enjoy yoour heart disease\n");
    	break;
}
	
	printf("You just added %d calories!\n", caloriesPerSlice*slices);
	
	
	
	//compiling cases
	
	printf("Please put the number of eggs you've eaten: ");
int pieces =3;

scanf("%d", &pieces);

int caloriesPerPiece = 2;
switch(pieces){
	
	
    case 1:
     
    	case 2:
    			
	    case 3:
        printf("You did a decent job\n");
        break;
    
        case 4:
        printf("You're a dissapointment\n");
        break;
    
        default:
        printf("Enjoy yoour heart disease\n");
    	break;
}
	
	printf("You just added %d calories!\n", caloriesPerPiece*pieces);
	
	
	return 0;
}


