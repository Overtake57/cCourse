#include <stdio.h>

int main()
{	//Operator precedence
	int x, y;
	x = (y = 5);

	//y = 5
	//x = y
	
	int z = 20;
	y = 2;
	x = -y + z;
	
	//x = - (y + z); x = -22
	// x = (-y) + z; x = 18
	
	printf("%i\n", x);
	return 0;	
}
