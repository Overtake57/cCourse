#include <stdio.h>

int main()
{
 /*	int x = 2 + 3 * 4 / (3 - 2);
	int y = 5 % 2;
	printf("%i\n", x);
 */

	int piecesOfPizza = 5;
	int numberOfEaters = 2;
	int leftOver = piecesOfPizza % numberOfEaters;
	
	printf("%i\n" , leftOver);
	
	return 0;
}
